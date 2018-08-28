/* Palindrome in a Linked List

Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true
Follow up:
Could you do it in O(n) time and O(1) space?


*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseAndClone(struct ListNode* node)
{
    struct ListNode* head = NULL;
    while(node){
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = node->val;
    newnode->next = head;
    head = newnode;
    node = node->next;
    }
    return head; 
}

bool isEqual(struct ListNode* head, struct ListNode* reverse)
{
    while(head && reverse){
        if(head->val != reverse->val) return false; 
        
        head = head->next;
        reverse = reverse->next;
    }
    return head==NULL&&reverse==NULL;
}
bool isPalindrome(struct ListNode* head) {
    struct ListNode* reverse = reverseAndClone(head);
    return isEqual(head, reverse);
}
