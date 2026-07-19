class Solution {
public:
    int differenceOfSums(int n, int m) {
         vector<int>d;
         vector<int>nd;

        for(int i = 1;i<=n;i++){
            if(i%m==0){
                d.push_back(i);
            }
            else{
                nd.push_back(i);
                
            }
        }
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0;i<d.size();i++){
              sum1 += d[i];
        }

        for(int i = 0;i<nd.size();i++){
              sum2 += nd[i];
        }

        return sum2 - sum1;
    }
};