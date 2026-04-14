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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }


        ListNode* rev = slow->next;
        ListNode* prev = slow->next = nullptr;
        while(rev){
            ListNode* temp = rev->next;
            rev->next = prev;
            prev = rev;
            rev = temp;
        }

        ListNode* left = head;
        ListNode* right = prev;

        while(right){
            ListNode* tmp1 = left->next;
            ListNode* tmp2 = right->next;
            left->next = right;
            right->next = tmp1;
            left = tmp1;
            right = tmp2;
        }

    }
};
