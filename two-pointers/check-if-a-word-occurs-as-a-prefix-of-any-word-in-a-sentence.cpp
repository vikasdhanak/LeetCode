class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count = 1;
        int ans = -1;
        bool cando = true;
        int n = searchWord.size();
        int x = 0;

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == searchWord[x] && cando) {
                x++;
            } else if (sentence[i] == ' ') {
                x = 0;
                cando = true;
                count++;

            } else {
                x = 0;
                cando = false;
            }
            if (x == n) {
                ans = count;
                break;
            }
        }
        return ans;
    }
};