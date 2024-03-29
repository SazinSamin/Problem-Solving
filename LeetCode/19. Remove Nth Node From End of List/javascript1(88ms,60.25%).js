/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    let fast = head;
        let slow = head;
        while(n--) {
                fast = fast.next;
        }

        if(fast == null) {
                head = head.next;
                return head;
        } else {
                while(fast.next != null) {
                        fast = fast.next;
                        slow = slow.next;
                }
        }

        slow.next = slow.next.next;

        return head;
};
