class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        new_t = list(t)
        for i in s:
            if i in new_t:
                new_t.remove(i)
            else:
                return False
        return not new_t

        