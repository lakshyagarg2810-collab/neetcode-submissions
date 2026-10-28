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
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode *ans = nullptr;
        ListNode *last = nullptr;
        while(list1 && list2){
            if(!ans){
                ans = (list1->val<=list2->val)?list1:list2;
                last = ans;
                if(list1->val<=list2->val)
                    list1 = list1->next;
                else
                    list2 = list2->next;
                continue;
            }
            if(list1->val<=list2->val){
                last->next = list1;
                list1 = list1->next;
            }
            else{
                last->next = list2;
                list2 = list2->next;
            }
            last = last->next;
        }
        if(list1)
            last->next = list1;
        if(list2)
            last->next = list2;
        return ans;
    }
};
