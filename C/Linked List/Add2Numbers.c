/*Add Two Numbers:

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL;
    struct ListNode* curr = NULL;
    int carry = 0;
    while(l1!=NULL||l2!=NULL)
    {
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        int v1 = (l1==NULL)?0:l1->val;
        int v2 = (l2==NULL)?0:l2->val;
        int sum = v1 + v2 + carry;
        newnode->val = sum%10;
        newnode->next = NULL;
        if(head == NULL) head = newnode;
        else curr->next = newnode;
        
        curr = newnode;
        carry = sum/10;
        
        if(l1!=NULL) l1 = l1->next;
        if(l2!=NULL) l2 = l2->next;
    }
    if(carry>0)
    {
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val = carry;
        newnode->next = NULL;
        curr->next = newnode;
        
    }
    
    return head;
    
}