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
    ListNode* rotateRight(ListNode* head, int k) {
        // vector<int>ans;
        // ListNode* temp = head;
        // if(head == NULL)return head;
        // while(temp){
        //     ans.push_back(temp->val);
        //     temp = temp->next;
            
        // }
        // int n = ans.size();
        // int d = k%n;
        // reverse(ans.begin(),ans.begin() + n-d);
        // reverse(ans.begin()+ n-d, ans.end());
        // reverse(ans.begin() ,ans.end());

        // int i = 0;
        // ListNode* temp1 = head;

        // while(temp1){
        //     temp1->val = ans[i++];
            
        //     temp1 = temp1->next;
        // }
        // return head;

        // NEW APPROACH ACTUALLY ROTATING NODES BY MAKING IT A CIRCULAR LIST

        if(head==NULL || head->next == NULL)return head;
        

        int count = 0;
        ListNode* temp= head;
        while(temp){
            count++;
            temp  = temp->next;
        }
        k = k%count;
        if(k==0)return head;

        count -=k;
        
        if(count==0)return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(count--){
            prev = curr;
            curr = curr->next;

        }
        prev->next = NULL;  // connection broke

        ListNode* tail  = curr;
        while(tail->next){
            tail = tail->next;
        }
        tail->next = head;

        head  = curr;
        return head; // curr is the head poiinter

        

    }
};