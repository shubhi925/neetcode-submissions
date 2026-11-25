class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        auto mp = unordered_set<char>();
        int l = 0;
        
        int max_len = 0;

        for (int r = 0; r < s.size(); r++) {
            while (mp.find(s[r]) != mp.end()) {
                mp.erase(s[l]);
                l++;
            }

            mp.insert(s[r]);
            max_len = max(max_len, r - l+1);
        }
        return max_len;
    }
};
