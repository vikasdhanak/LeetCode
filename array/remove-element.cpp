 class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            if (nums[end] == val) {
                end--;
            }
            else if (nums[start] == val) {
                swap(nums[start], nums[end]);
                end--;
            }
            else {
                start++;
            }
        }

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                count++;
            }
        }

        int ans = nums.size() - count;
        return ans;   // return only the count
    }
};