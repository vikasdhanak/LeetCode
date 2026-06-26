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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int x = 0;
        while(temp!=NULL){
            x++;
            temp = temp->next;
        }

        int pos = x/2 + 1;
        pos--;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(pos--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;

        return head;
    }

};