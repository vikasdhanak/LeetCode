class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];  // copy value

            if(num == 0 && digit == 0) {
                count++;
            }

            while(num > 0) {
                int rem = num % 10;
                if(rem == digit) {
                    count++;
                }
                num = num / 10;
            }
        }

        return count;
    }
};