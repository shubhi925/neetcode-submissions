class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        new_nums=[]
        for num in nums:
            if num not in new_nums:
                new_nums.append(num)
            else:
                return True
        return False
        