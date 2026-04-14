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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* sorted;
        ListNode* tmp;
        if(list1==nullptr)return list2;
        if(list2==nullptr)return list1;

        if((list1->val)<=(list2->val)){
                tmp = list1->next;
                sorted = list1;
                list1 = tmp;
        }
        else{
            tmp = list2->next;
            sorted=list2;
            list2=tmp;
        }
        ListNode* head = sorted;
        while(list1 && list2){
            if((list1->val)<=(list2->val)){
                tmp = list1->next;
                sorted->next=list1;
                sorted=list1;
                list1 = tmp;
            }
            else{
                tmp = list2->next;
                sorted->next=list2;
                sorted=list2;
                list2=tmp;
            }
            
        }
        while(list1){
            tmp = list1->next;
            sorted->next=list1;
            sorted=list1;
            list1 = tmp;
        }
        while(list2){
            tmp = list2->next;
            sorted->next=list2;
            sorted=list2;
            list2=tmp;
        }
        return head;
    }
};
