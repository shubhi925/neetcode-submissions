class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]<0) nums[i]=0;
        }

        for(int i=0; i<n; i++){
            if(nums[i]==0) continue;
            int pos = abs(nums[i])-1;
            if( pos < n ) {
                if(nums[pos]==0) nums[pos] = -(n+1);
                else nums[pos] = -1* abs(nums[pos]);
            }
        
        }
        for(int i=0; i<n; i++){
            if(nums[i]>=0) return i+1;
        }
        return n+1;
    }
};