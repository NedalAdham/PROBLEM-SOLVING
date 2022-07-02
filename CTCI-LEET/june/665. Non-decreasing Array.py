class Solution:
    def checkPossibility(self, nums) -> bool:
        lis = []

        for num in nums:
            # The rightmost index to insert, so list remains sorted is 
            rightmostmatchindex = bisect.bisect_right(lis, num)
            if rightmostmatchindex == len(lis):
                lis.append(num)
            lis[rightmostmatchindex] = num
        diff = len(nums) - len(lis)
        return diff < 2
    
"""X = Solution()
courses = [4,2,3]
print(X.checkPossibility(courses))"""