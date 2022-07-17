// https://leetcode.com/problems/reverse-linked-list/submissions/
/*206. Reverse Linked List

Given the head of a singly linked list, reverse the list, and return the reversed list.
Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL ){
            return head;
        }
        
        ListNode* Prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while(curr != NULL){
            forward = curr -> next;
            curr -> next = Prev;
            Prev = curr;
            curr = forward;
            
        }
        return Prev;
    }
};