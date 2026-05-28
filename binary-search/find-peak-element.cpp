 class Solution {
public:
    int findPeakElement(vector<int> &arr) {
      int n = arr.size();
      if(n==1)return 0; // if ther is single elemennt in array
      if(arr[0]>arr[1])return 0;  // if it is the first element 
      if(arr[n-1]>arr[n-2])return n-1; // if it is the last elemetnt

      int low = 1;
      int high=n-2;


      while(low<=high){
        int mid = low+(high-low)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
        else if(arr[mid] > arr[mid-1]){ // this condition means it is a increasing slope so the peak will be in the right side of mid as it will gradually increase
            low = mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            high = mid-1; // and if it is a decreasing slope it means the peak must be on the left side of the mid
        }
        else{
            low = mid+1;
        }
      }
      return -1;
    }
};