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
        vector<int>arr;

        ListNode* head1 =list1;

        while(head1!=NULL)
        {
            arr.push_back(head1->val);
            head1 = head1->next;
        }

        ListNode* head2 = list2;

        while(head2!=NULL)
        {
            arr.push_back(head2->val);
            head2 = head2->next;
        }

        if(arr.empty())
        return NULL;

        sort(arr.begin(),arr.end());

        ListNode* head = new ListNode(arr[0]);
        ListNode* temp = head;

        for(int i = 1;i<arr.size();i++){
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        };

        return head;


        
    }
};