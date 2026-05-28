class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0,j=0;
        long long window_sum = 0;
        long long result = 0;
        unordered_set<int>st;

        while(j<nums.size()){

        //  if duplicate found ,shrink window from left
        while(st.count(nums[j])){
            window_sum-= nums[i];
            st.erase(nums[i]);
            i++;
        }

        // add current element
        window_sum += nums[j];
        st.insert(nums[j]);

        // if window size is exactly k then hm calculation krenge apni
        if(j-i+1 == k){
            result = max(result,window_sum);
            // slide the window
            window_sum -= nums[i];
            st.erase(nums[i]);
            i++;
        }
        j++;

    }
    return result;

        
    }
};