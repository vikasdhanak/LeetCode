class Solution {
public:
    long long maxTotalValue(vector<int>& arr, int k) {
         int mx = INT_MIN;
         int mn = INT_MAX;
         for(int i = 0;i<arr.size();i++){
            if(arr[i]>mx) mx = arr[i];
            if(arr[i]<mn) mn = arr[i];
         }
        int  ans = mx-mn;
        long long result = ans*k;
        return result;
    }
};