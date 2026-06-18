class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
         int sum = nums[0];
         int maxsum = nums[0];
         for(int i = 1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sum = sum+nums[i];
            }
            else{
                maxsum = max(maxsum ,sum);
                sum = nums[i];

            }
         }
        maxsum = max(maxsum ,sum);
        return maxsum;


    }
};