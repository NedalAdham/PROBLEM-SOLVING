# Definition for singly-linked list.
class Node(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class ListNode(object):

    def __init__(self, head):
        self.head = head

    def Lenght(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.next

        return count

    def remove_element_at(self, index):
        if index < 0 or index >= self.Lenght():
            return

        if index == 0:
            self.head = self.head.next
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                itr.next = itr.next.next
                break

            itr = itr.next
            count += 1


class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        L = ListNode(head)
        dele = L.Lenght() - n
        L.remove_element_at(dele)
        return L.head
