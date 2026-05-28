 class Solution {
public:
    int majorityElement(vector<int>& v) {
        int cnt = 0;
        int el;

        // Moore's Voting: Find candidate
        for(int i = 0; i < v.size(); i++) {
            if(cnt == 0) {
                el = v[i];
                cnt = 1;
            }
            else if(v[i] == el) {
                cnt++;
            }
            else {
                cnt--;
            }
        }

        // Directly return candidate
        return el;
    }
};
