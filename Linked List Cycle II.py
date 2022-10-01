class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        s=set()
        while head is not None:
            if head.next in s:
                return head.next
            else:
                s.add(head)
                head=head.next
                
        return 
