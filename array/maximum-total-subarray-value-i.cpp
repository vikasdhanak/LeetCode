class Solution {
public:
    long long maxTotalValue(vector<int>& arr, int k) {
        int n = arr.size();

        int mx = arr[0];
        int mn = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > mx) {
                mx = arr[i];
            }
            if (arr[i] < mn) {
                mn = arr[i];
            }
        }

        long long subarray = mx - mn;
        long long result = subarray * k;
        return  result;
    }
};