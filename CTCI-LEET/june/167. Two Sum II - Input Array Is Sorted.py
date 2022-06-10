class Solution:
    def twoSum(self, arr: List[int], target: int) -> List[int]:
        
        s = 0
        end = len(arr)-1
        while s <= end:
            sum = arr[s]+arr[end]
            if sum == target:
                return [s+1, end+1]
            elif sum < target:s += 1
            else:end -= 1

        