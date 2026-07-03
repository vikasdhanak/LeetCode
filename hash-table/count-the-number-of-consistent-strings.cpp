class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int ans = 0;
        unordered_set<char> st(allowed.begin(), allowed.end());
        for (int i = 0; i < words.size(); i++) {

            bool valid = true;

            for (int j = 0; j < words[i].size(); j++) {

                if (st.find(words[i][j]) == st.end()) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans++;
        }
        return ans;
    }
};