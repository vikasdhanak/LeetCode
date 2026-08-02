class Solution {
public:
    int climbStairs(int n) {
        // if(n<=1)return 1; // base case

        // return climbStairs(n-1) + climbStairs(n-2);

        // same as fibonaaci seties just start from base input like 1,2,3,4..
        // and analyze the pattern

        // the ans is its sum of its 2 previous  no

        // for now it is showing time limit exceeded but i will come back and
        // asolve it using dp


        if(n==1)return 1;

        int prev2= 1;
        int prev1 = 2;
        
        for (int i = 3; i <=n; i++) {
          
            int current = prev1+prev2;
            prev2 = prev1;

            prev1 = current;
            
        }
        return prev1;
    }
};