class Solution {
public:
    void merge(vector<int>&arr, int start, int mid, int end) {
        vector<int> temp(end - start + 1);

        int left = start, right = mid + 1, index = 0;

        while (left <= mid && right <= end) {
            if (arr[left] <= arr[right]) {
                temp[index] = arr[left];
                index++;
                left++;
            } else {
                temp[index] = arr[right];
                index++;
                right++;
            }
        }
        // for the remaing element after boundaries reach
        // left array agar elemnt bacha h to unko direct copy krdo
        while (left <= mid) {

            temp[index] = arr[left];
            index++;
            left++;
        }

        // for right elment
        while (right <= end) {

            temp[index] = arr[right];
            index++;
            right++;
        }

        // filling temp elements to array

        index = 0;
        while (start <= end) {
            arr[start] = temp[index];
            start++, index++;
        }
    }
    void mergesort(vector<int>& arr, int start, int end) {
        if (start >= end)
            return; // base case

        int mid = start + (end - start) / 2;

        mergesort(arr, start, mid);   // left side
        mergesort(arr, mid + 1, end); // right side

        // for merging
        merge(arr, start, mid, end);
    }
    vector<int> sortArray(vector<int>& nums) {

        mergesort(nums, 0, nums.size() - 1);

        return nums;
    }
};