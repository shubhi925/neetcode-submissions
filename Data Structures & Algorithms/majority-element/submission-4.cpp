class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 1;
       int max = nums[0];
       for(int i = 1; i < nums.size(); i++){
            if(count == 0) max = nums[i];
            else if(nums[i] == max) count++;
            else count--;
       }
       return max; 
    }
};