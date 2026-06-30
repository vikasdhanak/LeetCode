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
    ListNode* swapNodes(ListNode* head, int k) {

        if (head == NULL)
            return head;
        ListNode* temp = head;

        ListNode* temp1 = head;
        int store = 0;
        int count = 0;
        int original_k = k;
        while (temp1) {
            count++;
            temp1 = temp1->next;
        }
        k--;
        while (k--) {
            temp = temp->next;
        }
        store = temp->val;

        int j = count - original_k+ 1;
        j--;

        ListNode* point = head;
        while (j--) {
            point = point->next;
        }
        temp->val = point->val;
        point->val = store;

        return head;
    }
};