class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {
        int n = candies.size();
        vector<bool>ans;
        int maxi  = INT_MIN;

        for(int i = 0;i<n;i++){
            if(candies[i]>maxi){
                maxi = candies[i];
            }
        }
        for(int i = 0;i<n;i++){
            if(candies[i]+extracandies >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};