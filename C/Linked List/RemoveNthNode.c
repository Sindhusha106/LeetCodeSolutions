/* Remove Nth Node From End of List

Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* pseudo = (struct ListNode*)malloc(sizeof(struct ListNode));
    pseudo->next = head;
    struct ListNode* slow = pseudo;
    struct ListNode* fast = pseudo;

    for(int i=1; i<=n+1; i++)
    {
        fast= fast->next;
    }
    
    while(fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    slow->next = slow->next->next;
    
    return pseudo->next;
}
