/* Merge Two Sorted Lists 

Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* a, struct ListNode* b) {
struct ListNode* result = NULL;
 
  /* Base cases */
  if (a == NULL) 
     return(b);
  else if (b==NULL) 
     return(a);
 
  /* Pick either a or b, and recur */
  if (a->val <= b->val) 
  {
     result = a;
     result->next = mergeTwoLists(a->next, b);
  }
  else
  {
     result = b;
     result->next = mergeTwoLists(a, b->next);
  }
  return(result);
}