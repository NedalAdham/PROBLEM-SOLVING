class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda x: -x[1])
        res = 0
        for boxes, units in boxTypes:
            if truckSize - boxes >= 0:
                res += boxes * units
                truckSize -= boxes
            else:
                res += truckSize * units
                break
        return res
        
