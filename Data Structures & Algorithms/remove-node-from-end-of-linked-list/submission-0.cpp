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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N = 1;
        ListNode* current = head;
        while(current->next!=nullptr){
            N++;
            current = current->next;
        }
        int K = N-n+1;
        if(N==n){
            return head->next;
        }
        current = head;
        for(int i=1;i<=K-1;i++){
            if(i==K-1){
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else{
                current = current->next;
            }
        }
        return head;

    }
};
