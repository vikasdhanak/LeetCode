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
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        if(head->next==NULL)return false;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;

        }
        if(temp->next!=NULL){
            return true;
        }
        return false;
    }
};