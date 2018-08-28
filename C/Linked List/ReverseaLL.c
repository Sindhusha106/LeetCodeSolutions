/* Reverse Linked List 

Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr =  head;
    struct ListNode* prev =  NULL;
    while(curr!=NULL)
    {
        struct ListNode* temp =  curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

