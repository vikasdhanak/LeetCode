/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b= headB;


        int count1 =0;
        int count2 =0;

        while(a !=NULL)
        {
            a = a->next;
            count1++;
        }

        while(b !=NULL)
        {
            b = b->next;
            count2++;
        }

        int diff= abs(count2-count1);
        
        a = headA;
        b = headB;

        if(count2>count1){
            while(diff--){
                b = b->next;
            }
        }

        if(count1>count2){
            while(diff--){
            a = a->next;
            }
        }

        while(a!=NULL  && b!=NULL)
        {
            if(a == b)
            {
                return a;
            }
            a = a->next;
            b = b->next;
        }
        return NULL;


        
    }
};