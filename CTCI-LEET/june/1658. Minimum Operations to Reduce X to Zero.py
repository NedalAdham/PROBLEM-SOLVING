class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        ret = inf;
        s = 0;
        end = -1
        for i, n in enumerate(nums):
            s += n
            if s > x: break
        else:
            return i - end if s == x else -1

        while i >= 0:
            s -= nums[i];
            i -= 1
            while s < x:
                s += nums[end];
                end -= 1
            if s == x: ret = min(ret, i - end)

        return ret if ret < inf else -1