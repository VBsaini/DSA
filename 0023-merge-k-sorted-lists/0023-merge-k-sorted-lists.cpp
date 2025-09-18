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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> H;
        ListNode* A = new ListNode();
        ListNode* Head = A;
        for(auto a : lists){
            ListNode* N = a;
            while(N != nullptr){
                H.push(N->val);
                N = N->next;
            }
        }
        while(!H.empty()){
            int val = H.top();
            cout << val << " ";
            ListNode* tempN = new ListNode(val);
            A->next = tempN;
            A = A->next;
            H.pop();
        }
        Head = Head->next;
        return Head;
    }
};