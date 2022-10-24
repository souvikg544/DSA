class Solution {
    public ListNode middleNode(ListNode head) {
      
        // fast and slow pointer method
        ListNode slow = head;
        ListNode fast = head;
        
        if(head == null || head.next == null){
            return head;
        }
        
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        
        return slow;
    }
}
