 class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle if k > n

        // Step 1: Reverse first part
        reverse(nums.begin(), nums.begin() + n - k);

        // Step 2: Reverse second part
        reverse(nums.begin() + n - k, nums.end());

        // Step 3: Reverse whole array
        reverse(nums.begin(), nums.end());
    }
};
