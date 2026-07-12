class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> duplicate = arr;
        sort(duplicate.begin(), duplicate.end());

        unordered_map<int, int> mp;
        int rank = 1;

        for (int x : duplicate) {
            if (mp.find(x) == mp.end()) {
                mp[x] = rank++;
            }
        }

        vector<int> ans;
        for (int x : arr) {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};