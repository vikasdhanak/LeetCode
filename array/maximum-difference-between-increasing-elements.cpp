class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n  = nums.size();
        vector<int>prefixmin(n);
        prefixmin[0] = nums[0];
        for(int i = 1;i<n;i++){
            prefixmin[i] = min(prefixmin[i-1] , nums[i]);
        }
        
        int result = INT_MIN;
        for(int i = 0;i<n;i++){
            result = max(result, nums[i] - prefixmin[i]);
        }
        if(result>0){
        return result;
        }
        return -1;

    }
};