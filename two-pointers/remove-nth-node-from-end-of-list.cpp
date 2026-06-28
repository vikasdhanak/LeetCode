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
        if (head == NULL )
            return NULL;
        
       

        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }

        if(count==n){
            head = head->next;
            return head;
         }


     
        count-=n;

                
        ListNode* curr = head;
        ListNode* prev = NULL;

          
        while (count--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};