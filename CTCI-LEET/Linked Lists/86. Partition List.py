
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def insert(head1, head2, k):
    # traverse the first linked list until k-th
    # point is reached
    count = 1
    curr = head1
    while (count < k):
        curr = curr.next
        count += 1

    # backup next node of the k-th point
    temp = curr.next

    # join second linked list at the kth point
    curr.next = head2

    # traverse the second linked list till end
    while (head2.next != None):
        head2 = head2.next

    # join the second part of the linked list
    # to the end
    head2.next = temp
    return head1

class Solution(object):
    def partition(self, head, x):
        
        h1 = l1 = ListNode(0)
        h2 = l2 = ListNode(0)

        while head:
            if head . val < x :
                l1 . next = head
                l1 = l1.next
                
            else :
                l2.next = head
                l2 = l2.next
            head = head.next
                
                
        l2.next = None
        l1.next = h2.next
        
        return h1.next
            
        