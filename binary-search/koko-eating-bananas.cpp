 class Solution {
public:

    int findMax(vector<int> &v){
        int maxi = INT_MIN;
        for(int i = 0; i < v.size(); i++){
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    long long calculatetotalhours(vector<int> &v, int hourly){
        long long totalH = 0;

        for(int i = 0; i < v.size(); i++){
            totalH += (v[i] + hourly - 1) / hourly;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1;
        int high = findMax(v);

        while(low <= high){
            int mid = low + (high - low) / 2;   // ✅ safe mid

            long long total_hrs = calculatetotalhours(v, mid); // ✅ long long

            if(total_hrs <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};
