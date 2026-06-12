class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int>prefixsum(n);
        vector<int>suffixsum(n);


        prefixsum[0] = arr[0];
        for(int i = 1;i<n;i++){
            prefixsum[i] = prefixsum[i-1] + arr[i];
        }

        suffixsum[n-1] = arr[n-1];
        for(int i = n-2;i>=0;i--){
            suffixsum[i] = suffixsum[i+1] + arr[i];
        }
        for(int i = 0;i<n;i++)
        {
            if(suffixsum[i] == prefixsum[i])return i;
        }

        return -1;
        
    }
};