class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        i = 0
        while i < len(nums) - 1:
            j = i + 1
            while j < len(nums):
                result = nums[i] + nums[j]
                if result == target:
                    return [i, j]
                else:
                    j+=1
            i+=1
