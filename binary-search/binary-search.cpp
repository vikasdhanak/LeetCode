class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // using binary search
        int start =0,end =n-1,mid;
        while(start<=end)
        {
            mid =  start +(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
            start = mid+1; // right side
            }
            else
            {
                end = mid-1; // left side
            }
        }
        return -1;
        
    }
};