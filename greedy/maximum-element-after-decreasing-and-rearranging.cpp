class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // greedy approach 

        int maximum = INT_MIN;
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
            if(i==0){
                arr[i] = 1;
            }
            else if(abs(arr[i] - arr[i-1])>=1){
                arr[i] = arr[i-1]+1;
                maximum = max(maximum , arr[i]);
            }
        }
        return maximum;

    }
};