 class Solution {
public:
    int search(vector<int> &a, int k) {
        int n = a.size();
        int st = 0;
        int end  = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;// finding mid
            if(a[mid]==k){
                return mid;
            }
            // search for sorted half in the array
            else{
                if(a[st]<=a[mid])// left half is sorted
                {
                    // applying binary search in left half
                    if (a[st] <= k && k <= a[mid])
                    {
                        end = mid-1; // search in left
                    }
                    else{
                        st = mid+1;// search in right
                    }
                }
                else{
                    // applying binarysearch in right half
                    if(a[mid]<= k && k <=a[end]){
                        st = mid+1; // search in  left
                    }
                    else{
                        end = mid-1; // search in right
                    }
                }
            }
        }
        return -1; // if not found
    }
       
};
 