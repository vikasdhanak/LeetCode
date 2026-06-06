class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum(n);
        vector<int>rightsum(n);
        vector<int>answer;
        int sum1 = 0;
        for(int i = 0;i<n;i++){
            if(i == 0){
                leftsum[i] = 0;
            }
            else{
            sum1 +=nums[i-1];
            leftsum[i] = sum1;
            }
        }
        int sum2 = 0;

         for(int i = n-1;i>=0;i--){
            if(i == n-1){
                rightsum[i] = 0;
            }
            else{
                sum2 += nums[i+1];
            rightsum[i]  = sum2;
            }
        }
        for(int i = 0;i<n;i++){
            answer.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return answer;


       
       
    }
};