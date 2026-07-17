class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            if(s.starts_with(words[i])){
                count++;
            }
        }
        return count;
    }
};