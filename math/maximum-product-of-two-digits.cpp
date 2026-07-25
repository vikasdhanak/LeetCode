class Solution {
public:
    int maxProduct(int n) {
        int maxdigit = 0;
        int secondmaxdigit = 0;

        while(n>0){
            int r = n%10;

            if(maxdigit < r){
                secondmaxdigit = maxdigit;
                maxdigit = r;
            }
            else if(secondmaxdigit < r){
                secondmaxdigit = r;
            }
            n/=10;
        }

        return maxdigit*secondmaxdigit;
    }
};