from typing import List

class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        freq = {}
        i = 0
        while i < len( nums ) :
            if freq.get(nums[i], 0) == 0:
                freq[nums[i]] = 1
            else :
                freq[nums[i]] = freq[nums[i]] + 1
            i += 1
        for key in freq:
            if freq[key] & 1 != 0: return False
        return True

nums = [1,1]
solution = Solution()
print(solution.divideArray(nums))  