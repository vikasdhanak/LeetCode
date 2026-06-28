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
        vector<int>ans;
        ListNode* temp = head;
        if(head == NULL)return head;
        while(temp){
            ans.push_back(temp->val);
            temp = temp->next;
            
        }
        int n = ans.size();
        int d = k%n;
        reverse(ans.begin(),ans.begin() + n-d);
        reverse(ans.begin()+ n-d, ans.end());
        reverse(ans.begin() ,ans.end());

        int i = 0;
        ListNode* temp1 = head;

        while(temp1){
            temp1->val = ans[i++];
            
            temp1 = temp1->next;
        }
        return head;
    }
};