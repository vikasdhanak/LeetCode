class Solution {
public:
    string toLowerCase(string s) {
        int i = 0;
        while(i<s.size()){
            if(s[i] >= 'A' && s[i]<='Z'){
            s[i] = tolower(s[i]);
        }
        i++;
    }
    return s;
}
};