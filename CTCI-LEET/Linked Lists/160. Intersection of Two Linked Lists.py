# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

def get_length(head):
    list_length = 0
    while head != None:
        head = head.next
        list_length+=1
    return list_length

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        lena , lenb = get_length(headA) , get_length(headB)
        list1 , list2 = None , None
        if lena >= lenb :
            dif = lena - lenb
            list1 = headA
            list2 = headB
        else :
            dif = lenb - lena
            list1 = headB
            list2 = headA
            
        while dif != 0 :
            list1 = list1.next
            dif-=1
            
        while list1:
            if list1 == list2:return list1
            list1=list1.next
            list2=list2.next
        return None
