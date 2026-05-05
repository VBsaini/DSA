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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || k == 0) return head;
        int len = 0;
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
            len++;
        }
        len++;
        int n = k%len;
        if(n == 0) return head;
        // cout << k%len;
        // temp->next = head;
        // if(n == 1 && len == 2){
        //     temp = head->next;
        //     head->next = nullptr;
        //     return temp;
        // }
        cout << endl << temp->val;
        temp = head;
        for(int i = 0; i < n; i++){
            // temp=temp->next;
            // ListNode* first = head;
            ListNode* last = head;
            ListNode* last2 = head;
            while(last->next->next != nullptr) last = last->next;
            last2 = last;
            last = last->next;
            last2->next = nullptr;
            last->next = head;
            head = last;
        }
        // head = temp->next;
        // temp->next = nullptr;
        return head;
    }
};