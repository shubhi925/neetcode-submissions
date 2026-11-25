class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> mpp;

        int l = 0;
        for (int r = 0; r < n; r++) {
            if (r - l > k) {
                mpp.erase(nums[l]);
                l++;
            }
            if (mpp.find(nums[r]) != mpp.end()) {
                return true;
            }
            mpp.insert(nums[r]);
        }

        return false;
    }
};
