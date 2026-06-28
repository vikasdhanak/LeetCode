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

        if(head->next== NULL)return 1;

        // counting the nu of nodes
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        count = count/2;

        // breaking the linked list into two halves 
        ListNode* curr = head;
        ListNode* prev= NULL;
        while(count--){
            prev = curr;
            curr= curr->next;
        }
        prev->next = NULL; // breaking it

        // reverse the second linked list , curr is pointing it
        ListNode* front;
        prev= NULL;
        
        while(curr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr= front;
        }
        // prev is pointing to second list
        // head is pointing to first list

        ListNode* head1 = head;
        ListNode* head2 = prev;
        // check pallindrome
        while(head1){
            if(head1->val != head2->val)return 0;
            head1 = head1->next;
            head2 = head2->next;


        }
        return 1;


    
    }
};