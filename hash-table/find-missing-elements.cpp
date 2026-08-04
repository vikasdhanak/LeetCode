class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i = 0;i<n;i++){
            if(nums[i]<mini){
                mini = nums[i];
            }
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i = mini;i<=maxi;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};