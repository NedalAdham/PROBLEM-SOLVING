class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        r , l , total , best =0 ,0 ,0 ,0
        N = len(nums)
        sett = set()
        
        while r < N :
            while nums[r] in sett:
                sett.remove (nums[l])
                total-=nums[l]
                l+=1
            sett.add(nums[r])
            total+=nums[r]
            r += 1
            best = max (best , total)
        return best
            
        