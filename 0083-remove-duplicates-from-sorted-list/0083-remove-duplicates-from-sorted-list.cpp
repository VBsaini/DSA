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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* ans = new ListNode(head->val);
        ListNode* p = ans;
        ListNode* p1 = head;
        while(p1 != nullptr){
            if(p->val != p1->val){
                ListNode* temp = new ListNode(p1->val);
                p->next = temp;
                p = p->next; 
            }
            p1 = p1->next;
        }
        
        return ans;
    }
};