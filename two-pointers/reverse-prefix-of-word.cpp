class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        int pos = word.find(ch);
        
        int l = pos;
        int k = 0;
        int temp = ' ';
         reverse(word.begin(),word.begin()+ + pos+1);
        return word;
    }
};