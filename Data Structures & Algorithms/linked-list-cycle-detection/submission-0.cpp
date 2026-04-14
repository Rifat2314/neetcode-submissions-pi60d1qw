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
    bool hasCycle(ListNode* head) {
        ListNode* tmp;
        while(head){
            if(head->val==5000){
                return true;
            }
            tmp = head->next;
            head->val = 5000;
            head = tmp;
        }
        return false;
    }
};
