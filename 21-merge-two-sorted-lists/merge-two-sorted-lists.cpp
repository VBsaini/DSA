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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* res = ans;
        if(!list1) return list2;
        if(!list2) return list1;
        if(list1->val < list2->val){
            ans->val = list1->val;
            list1 = list1->next; 
        } else {
            ans->val = list2->val;
            list2 = list2->next;
        }
        while(list1 != nullptr && list2 != nullptr){
        ListNode* temp = new ListNode();
            if(list1->val < list2->val){
                temp->val = list1->val;
                list1 = list1->next; 
            } else {
                temp->val = list2->val;
                list2 = list2->next;
            }
            ans->next = temp;
            ans = ans->next;
        }
        if(list1)
        {
            ans->next = list1;
            cout << "l1";
        }
        if(list2)
        {
            ans->next = list2;
            cout << "l2";
        }
        return res;
    }
};