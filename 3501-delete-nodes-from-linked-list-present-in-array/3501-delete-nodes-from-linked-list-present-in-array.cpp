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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* ans = new ListNode();
        ListNode* ansH = ans;
        ListNode* temp = head;
        set<int> num; 
        for(auto a : nums){
            num.insert(a);
        }
        while(temp != nullptr){
            cout << temp->val << " ";
            if(num.find(temp->val) == num.end()){
                ListNode* T = new ListNode(temp->val);
                ans->next = T;
                ans = ans->next;
            }
            temp = temp->next;
        }
        return ansH->next;
    }
};