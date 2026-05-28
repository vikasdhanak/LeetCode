class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n= arr.size();
        vector<int> newArr(n);
        for(int i = 0;i<n;i++)
        {
            arr[i] = arr[i]*arr[i];
            newArr[i] = arr[i];
 
        }
        
             

        sort(newArr.begin(),newArr.end());
        return newArr;
    }
};