class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> indxMap;

      for(int i = 0; i < nums.size(); i++){
        int diff = target - nums[i];
        if(indxMap.find(diff) != indxMap.end()){
            return {indxMap[diff],i};
        }
        indxMap.insert({nums[i], i});
      }
    return {};
    }
};
