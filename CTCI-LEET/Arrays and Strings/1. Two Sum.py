def getIndex(listOfIntegers, NumericVariable):
    inp = int(NumericVariable)
    for i in listOfIntegers:
        if i == inp:
            b = (listOfIntegers.index(i))
            c = b + 1

    if c < len(listOfIntegers):
        y = listOfIntegers[c:]

        for j in y:
            if j == inp:
                d = (y.index(j))
                res = d + c

                return res
            continue

    else:
        return 0
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        zeros = []
        for i in range(len(nums)):
            if nums [i] == 0 : zeros.append(i)

        if target == 0 and len(zeros) == 2:
            return zeros[0] , zeros[1]
        if target == 0 and len(zeros)==1:return None


        nums.append(target)
        targetttt = nums
        targetttt.index(target)

        for i in range (len(targetttt)):
            l = i
            for j in range(l+1 , len(targetttt)):
                if targetttt[i] + targetttt[j] == target :
                    if nums.index(targetttt[i]) != nums.index(targetttt[j]):
                        return nums.index(targetttt[i]) , nums.index(targetttt[j])
                    else : return nums.index(targetttt[i]),getIndex(nums,nums[j])
                else :continue


        if len(zeros) == 1 and nums.index(target) != ValueError :
            return zeros[0] , nums.index(target)
