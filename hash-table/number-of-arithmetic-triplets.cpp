class Solution {
public:
    int arithmeticTriplets(vector<int>& v, int diff) {
        int n = v.size();
        vector<int>ans;
        int count = 0;

        int i = 0;
        int j = i+1;
        int k = j+1;
        while(k<n){
            if((v[j] - v[i] == diff) && (v[k] - v[j] == diff)) {
                count++;
                i++;
                j++;
                k++;
            }
            else if(v[j]-v[i]<diff){
                j++;
                if(k==j){
                    k++;
                }

            }
            else if(v[j]-v[i]>diff){
                i++;
                if(j==i){
                    j++;
                    if(k==j){
                        k++;
                    }
                }
            
            }
            else if(v[k]-v[j]<diff){
                k++;
            }
             else if(v[k]-v[j]>diff){
                j++;
                if(k==j){
                    k++;
                }
            }
        }
        return count;
        

        }
};
