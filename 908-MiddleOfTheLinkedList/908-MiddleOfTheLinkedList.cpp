// Last updated: 5/24/2025, 11:54:19 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr){
            if(fast->next == nullptr){
                fast = nullptr;
                return slow;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};