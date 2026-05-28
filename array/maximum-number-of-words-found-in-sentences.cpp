 class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int wordCount = 1; // at least one word
            for (char c : s) {
                if (c == ' ') wordCount++;
            }
            maxWords = max(maxWords, wordCount);
        }

        return maxWords;
    }
};
