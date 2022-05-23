# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        
        #double speed pointer reach the end while slow remains at the middel
        slow = fast = head
        
        while fast and fast.next:
            fast = fast . next . next
            slow = slow . next
            
        middle = slow 
        #reverse LL
        prev , curr = None , middle
        
        while curr :
            nxt = curr.next
            curr . next = prev
            prev = curr
            curr = nxt
        
        
        l , r =  head  , prev
        
        while r : 
            if l.val != r.val:
                return False
            l=l.next
            r=r.next
            
            
            
        return True
            
        