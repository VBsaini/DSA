// Last updated: 5/24/2025, 11:54:46 PM
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
    ListNode* reverseList(ListNode* head) {
        ListNode* back = nullptr;
        ListNode* temp = head;
        ListNode* front = head;
        while(front != nullptr){
            front = front->next;
            temp->next = back;
            back = temp;
            if(front == nullptr){
                return temp;
            }
            temp = front;
        }
        return temp;

    }
};