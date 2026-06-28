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
    bool isPalindrome(ListNode* head) {

        if(head==NULL)return false;
        if(head->next==NULL)return true;
        ListNode* temp = head;
        ListNode* tail = head;
        while(tail->next){
            tail = tail->next;
            
        }
        if(temp->val != tail->val)return false;

        return true;
    }
};