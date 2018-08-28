/* Remove Duplicates from Sorted List 

Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode * temp = head;
    if(temp == NULL) return temp;
    while(temp->next!=NULL)
    {
        if(temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }
        else  temp = temp->next;
    }
    return head;
}