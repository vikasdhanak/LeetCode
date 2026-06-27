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
    ListNode* reverseList(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;

        while(temp != NULL) {
            nums.push_back(temp->val);
            temp = temp->next;
        }

        reverse(nums.begin(), nums.end());

        if(nums.empty()) return NULL;

        ListNode* newHead = new ListNode(nums[0]);
        ListNode* tail = newHead;

        for(int i = 1; i < nums.size(); i++) {
            tail->next = new ListNode(nums[i]);
            tail = tail->next;
        }

        return newHead;
    }
};