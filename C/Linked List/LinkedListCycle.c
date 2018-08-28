/* Linked List Cycle 


Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head==NULL||head->next==NULL) return false;
    struct ListNode * slow = head;
    struct ListNode * fast = head->next;
    
    while(slow!=fast){
        if(fast==NULL||fast->next==NULL) return false;
        slow = slow->next;
        fast = fast->next->next;
        }
    return true;
}