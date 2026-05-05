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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addFunc(l1, l2, 0);
    }
    ListNode* addFunc(ListNode* l1, ListNode* l2, int carry){
        if(l1 == nullptr && l2 == nullptr){
            if(carry == 1) return new ListNode(1);
            return nullptr;
        }

        int sum = carry;

        if(l1) sum += l1->val;
        if(l2) sum += l2->val;

        ListNode* add = new ListNode(sum % 10);
        int newCarry = sum / 10;
        add->next = addFunc(l1 ? l1->next : nullptr, l2 ? l2->next : nullptr, newCarry);
        return add;
    }
};