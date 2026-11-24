class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_sum(n);
        vector<int> suffix_sum(n);
        vector<int> output(n);
        prefix_sum[0] = 1;
        suffix_sum[n-1] = 1;
        for(int i=1; i<n; i++){
            prefix_sum[i] = prefix_sum[i-1]*nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            suffix_sum[i] = suffix_sum[i+1]*nums[i+1];
        }

        for(int i=0; i<n; i++){
            output[i] = prefix_sum[i]*suffix_sum[i];
        }
    return output;
    }
};
