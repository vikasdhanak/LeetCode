class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans= 0;
        unordered_map<int,int>mp;
        while(n>0){
            int rem = n%10;
            mp[rem]++;
            n=n/10;
        }
        for(auto it:mp){
            ans += (it.second * it.first);
        }
        return ans;
    }
};