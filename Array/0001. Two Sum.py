class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        l = len(nums)
        check = True
        for i in range(0,l):
            
            for j in range(i+1,l):
                if nums[i] + nums[j] == target:
                    ans.append(i)
                    ans.append(j)
                    check = False
                    break
            if not check:
                break
        return ans
