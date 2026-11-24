class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int max_len = 0;

        for(int num : numSet){
            if(numSet.find(num-1) == numSet.end()){
                int len = 1;
                while(numSet.find(num+len) != numSet.end()){
                    len++;
                }
                max_len = max(max_len, len);
            }
        }
        return max_len;
    }
};
