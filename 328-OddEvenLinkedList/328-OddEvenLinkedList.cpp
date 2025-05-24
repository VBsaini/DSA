// Last updated: 5/24/2025, 11:54:36 PM
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* tempEven = nullptr;
        ListNode* tempOdd = nullptr;
        ListNode* tempOhead = nullptr;
        ListNode* tempEhead = nullptr;
        if(head != nullptr && head->next != nullptr){
            tempOdd = new ListNode(head->val); 
            tempEven  = new ListNode(head->next->val);
            tempOhead = tempOdd; 
            tempEhead = tempEven;
        } else {
            return head;
        }
        ListNode* first = head->next->next;
        bool flag = true;
        while(first != nullptr){
            ListNode* temp = new ListNode(first->val);
            if(flag == true){
                tempOdd->next = temp;
                tempOdd = temp;
                flag = false;
            } else {
                tempEven->next = temp;
                tempEven = temp;
                flag = true;
            }
            first = first->next;
        }
        tempOdd->next = tempEhead;
        head = tempOhead;
        return head;
    }
};