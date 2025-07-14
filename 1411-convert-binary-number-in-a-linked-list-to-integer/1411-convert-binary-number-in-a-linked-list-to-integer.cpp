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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        int count = 0;
        for(ListNode* a = head; a->next != nullptr; (a = a->next)){
            count++;
        };
        for(int i = count; i >= 0; i--){
            num = num + (pow(2, count) * head->val);
            count--;
            head = head->next;
        }
        return num;
    }
};