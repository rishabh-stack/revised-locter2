class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        su=0
        tot=(len(nums)*(len(nums)+1))//2
        for i in nums:
            su=su+i
        return tot-su
