// Last updated: 5/24/2025, 11:54:56 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head; 
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            if(fast->next == slow){
                return 1;
            }
            fast=fast->next->next;
            slow=slow->next;
        } 
        return 0;
    }
};