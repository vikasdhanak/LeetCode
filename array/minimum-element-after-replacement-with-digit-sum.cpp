class Solution {
public:
    int minElement(vector<int>& nums) {

        int n = nums.size();
        vector<int>digit;
         
        for(int i = 0;i<n;i++){
            int sum = 0;
            int number = nums[i];
            while(number>0){
                sum += number%10;
                number = number/10;
            }
            digit.push_back(sum);
        }
        return *min_element(digit.begin(),digit.end());
    }
};