class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int minimum  = INT_MAX;
        int maximum = INT_MIN;
        for(int i = 0;i<n;i++){
            if(nums[i]<minimum){
                minimum = nums[i];
            }
            if(nums[i]>maximum){
                maximum = nums[i];
            }
        }

        unordered_map<int,int>mp;
        for(auto it:nums){

            mp[it]++;

        }
        for(int i =minimum;i<=maximum;i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};