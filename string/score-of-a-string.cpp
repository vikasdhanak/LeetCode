class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int n  = s.size();
        int i = 0;
        int j = i+1;
        while(j<n){
            sum += abs(int(s[i])-int(s[j]));
            i++;
            j++;
        }
        return sum;
    }
};