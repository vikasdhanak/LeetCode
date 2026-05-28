 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN; // store the maximum sum
        int prefix = 0;     // current running sum

        for(int i = 0; i < n; i++) {
            prefix = prefix + nums[i];
            maxi = max(maxi, prefix);  // update global max

            if(prefix < 0) { // reset prefix if it becomes negative
                prefix = 0;
            }
        }

        return maxi;
    }
};
