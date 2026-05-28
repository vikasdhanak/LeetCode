 class Solution {
public:
    bool isPalindrome(string s) {

        string ans = "";

        int n = s.size();
        int i = 0;

        while (i < n) {
            char c = s[i];

            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a'; // convert uppercase to lowercase
            }

            if (isalnum(c)) {
                ans.push_back(c); // keep only alphanumeric
            }

            i++;
        }

        // check palindrome
        int st = 0, e = ans.size() - 1;

        while (st < e) {
            if (ans[st] != ans[e]) {
                return false;
            }
            st++;
            e--;
        }

        return true;
    }
};
