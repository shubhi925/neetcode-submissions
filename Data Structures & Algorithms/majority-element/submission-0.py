class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        counter={}
        n = len(nums)

        for num in nums:
            counter[num]=counter.get(num,0)+1
            if counter[num]>n//2:
                return num

            
        