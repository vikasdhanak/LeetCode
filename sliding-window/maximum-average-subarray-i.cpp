class Solution {
public:
    double findMaxAverage(vector<int>&  arr, int k) {
        int n = arr.size();
        /// first lets do for first window of size k
        int l = 0,r = k-1;
        double avg = 0;
        int sum = 0;
        double maxavg = 0;

        for(int i = 0;i<k;i++){
            sum += arr[i];
             
        }
        avg = (double)sum/k;
        maxavg = avg;

        while(r<n-1){
            sum = (double)sum - arr[l];
            l++;
            r++;
            sum = (double)sum+arr[r];
            avg = (double)sum/k;
            maxavg = max(avg,maxavg);
        }
        return maxavg;
    }
};