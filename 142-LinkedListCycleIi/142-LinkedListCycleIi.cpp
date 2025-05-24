// Last updated: 5/24/2025, 11:54:54 PM
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
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next==nullptr) {return nullptr;}
        ListNode* fast = head->next->next;
        ListNode* slow = head->next;
        while(slow != fast){
            if(fast == nullptr || fast->next==nullptr) {return nullptr;}
            slow=slow->next;
            fast=fast->next->next;
        }
        slow = head;
        while(slow != fast){
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};