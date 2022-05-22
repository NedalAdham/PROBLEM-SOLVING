# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        sum1 , sum2 , D = 0 , 0 ,0
        
        while l1:
            sum1 += l1.val * 10 ** D
            l1 = l1.next
            D+=1
        
        D = 0
        
        while l2:
            sum2 += l2.val * 10 ** D
            l2 = l2.next
            D+=1
        
        num = sum1+sum2
        
        
        ans = cur = ListNode(0)
        if num == 0 :return ans
        
        while num:
            cur.next = ListNode(num % 10)
            num //= 10
            cur = cur.next
        return ans.next