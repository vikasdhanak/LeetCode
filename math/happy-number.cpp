class Solution {
public:
    bool isHappy(int n) {
        int rem;
        int sum;
        while(n!=1 && n!=4)
        {
             
            sum =0;
            while(n!=0)
            {
                rem = n%10;
                sum +=(rem*rem);
                n = n/10;

            }
            n=sum;
        }
            return n==1;
    }
    
    
    };
    
        
        