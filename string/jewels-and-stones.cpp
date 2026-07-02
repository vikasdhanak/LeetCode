class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(char it:stones){
            mp[it]++;
        }

        int ans = 0;
        for(int i = 0;i<jewels.size();i++){
            if(mp.find(jewels[i])!=mp.end()){
                ans+= mp[jewels[i]];
            }
        }
        return ans;
    }
};