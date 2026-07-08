class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> clone  = heights;
         
        sort(clone.begin(),clone.end());
        int notmatch = 0;
        int i = 0;
        while(i<n){
            if(heights[i]!=clone[i]){
                notmatch++;
            }
            i++;
        }
        return notmatch;
    }
};