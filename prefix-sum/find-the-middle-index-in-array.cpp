class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n  = nums.size();
        int middleindex;
       for(int i = 0;i<n;i++){
        int prefixsum=0;
        int suffixsum = 0;
        
            
            int k = i-1;
            while(k>=0){
                prefixsum+=nums[k];
                k--;

            }
            k  = i+1;
            while(k<n){
                suffixsum+=nums[k];
                k++;
            }
            if(prefixsum==suffixsum){
                return i;
            }
            
        }
        return -1;
    }
};