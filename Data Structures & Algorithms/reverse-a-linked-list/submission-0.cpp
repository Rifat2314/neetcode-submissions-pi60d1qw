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
        vector<int>v;
        ListNode* tmp = head;
        while(tmp){
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        if(v.size()==0){
            return {};
        }
        reverse(v.begin(),v.end());
        ListNode* node = new ListNode(v[0]);
        ListNode* move = node;

        for(int i=1;i<v.size();i++){
            ListNode* temp = new ListNode(v[i]);
            move->next = temp;
            move = temp;
        }
        
        return node;

    }
};
