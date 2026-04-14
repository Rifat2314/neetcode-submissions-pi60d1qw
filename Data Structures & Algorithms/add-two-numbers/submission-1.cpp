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
        ListNode* prev1 = nullptr;
        ListNode* cur = l1;
        while(cur){
            ListNode* tmp = cur->next;
            cur->next = prev1;
            prev1 = cur;
            cur = tmp;
        }   
        ListNode* prev2 = nullptr;
        cur = l2;
        while(cur){
            ListNode* tmp = cur->next;
            cur->next = prev2;
            prev2 = cur;
            cur = tmp;
        }
        int a = 0;
        int b = 0;
        while(prev1){
            a = a*10 + prev1->val;
            prev1 = prev1->next;
        }
        while(prev2){
            b = b*10 + prev2->val;
            prev2 = prev2->next;
        }        
        int sum = a+b;
        ListNode* result = new ListNode(sum%10);
        ListNode* head = result;
        sum /= 10;
        while(sum){
            ListNode* tmp = new ListNode(sum%10);
            result->next = tmp;
            result = tmp;
            sum /= 10;
        }
        return head;
    }
};
