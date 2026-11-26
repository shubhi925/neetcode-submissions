class Solution {
   public:
    int mySqrt(int x) {
        int s = 0, e = x;
        int ans = 0;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if ((long long)mid * mid > x) {
                e = mid - 1;
            } else if ((long long)mid * mid < x) {
                s = mid + 1;
                ans = mid;
            } else {
                return mid;
            }
        }
        return ans;
    }
};