// Last updated: 5/24/2025, 11:55:22 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head->next == nullptr){
            return nullptr;
        }
        for (int i = 0; i < n; i++)
        fast = fast->next;

        if (fast == NULL)
        return head->next;


        for(ListNode* temp = head; temp->next != nullptr; temp = temp->next){
            if(fast->next == nullptr){
                slow->next = slow->next->next;
                return head;
            }
            slow=slow->next;
            fast=fast->next;
        }
            return head;
    }
};