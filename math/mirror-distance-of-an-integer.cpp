class Solution {
public:
    int mirrorDistance(int n) {
        string s = to_string(n); 
        reverse(s.begin(),s.end());

        int h = stoi(s);

        int ans = abs(n-h);
        return ans;
        }
};