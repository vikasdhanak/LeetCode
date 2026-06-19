class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>prefixsum(n+1);
        prefixsum[0] = 0;
        int maxheight = 0;
        for(int i = 1;i<=n;i++){
            prefixsum[i] = prefixsum[i-1] + gain[i-1];
            if(prefixsum[i]>maxheight) maxheight = prefixsum[i];
        }
        
        return maxheight;

        

    }
};