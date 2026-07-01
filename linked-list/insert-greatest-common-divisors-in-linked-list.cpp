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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;

        ListNode* prev  = NULL;
        ListNode* curr = head;

         
        while(curr->next){

           int  ans = 0;
            prev = curr;
            curr = curr->next;

            ans = gcd(prev->val , curr->val);
            ListNode* newNode = new ListNode(ans);

            newNode->next = prev->next;
            prev->next = newNode;
        }

        return head;

    }
};