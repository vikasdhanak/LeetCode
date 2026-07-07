class Solution {
public:
    long long sumAndMultiply(int n) {
        int temp = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                temp = temp * 10 + digit;
            }
            n = n / 10;
        }
        int ans = 0;
        while (temp > 0) {
            ans = ans * 10 + (temp % 10);
            temp = temp / 10;
        }
        int num = ans;
        int sum = 0;
        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }

        long long final = 1LL* ans * sum;
        return final;
    }
};