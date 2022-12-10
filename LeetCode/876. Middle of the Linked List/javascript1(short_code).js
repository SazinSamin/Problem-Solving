var middleNode = function(head) {
    if (head == null ) return null;
        if(head.next == null) return head;
        let slow = head;
        let fast = head;
        while(fast != null && fast.next != null) {
                [slow, fast] = [slow.next, fast.next.next];
        }
        return slow;
};
