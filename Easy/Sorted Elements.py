class Solution:
    def solve(self, nums):
        c=nums.copy()
        b=0
        nums.sort()
        # print(nums)
        # print(c)
        print(nums)
        for i in range(0,len(nums)):
            if(nums[i]==c[i]):
                b=b+1
        return (b)