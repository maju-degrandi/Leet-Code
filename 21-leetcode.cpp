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
        ListNode* newhead = list1;
        if(list2 == NULL) return newhead;
        if(list1 == NULL) return list2;

        if(list2->val < list1->val)
        {
            newhead = list2;
            list2 = list2->next;
        }
        else list1 = list1->next;

        ListNode* ans = newhead;

        while(list1 != NULL || list2 != NULL)
        {
            if(list1 == NULL)
            {
                newhead->next = list2;
                return ans;
            }
            else if(list2 == NULL)
            {
                newhead->next = list1;
                return ans;
            }

            if(list1->val < list2->val)
            {
                newhead->next = list1;
                list1 = list1->next;
            }
            else
            {
                newhead->next = list2;
                list2 = list2->next; 
            }

            newhead = newhead->next;
        }
        return ans;
    }
};
