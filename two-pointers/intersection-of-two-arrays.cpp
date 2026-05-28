class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Storing elements of nums1 in a set
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result;

        // Check common elements in nums2
        for(int num : nums2) {
            if(set1.count(num)) {
                result.insert(num);
            }
        }

        // Convert result set into vector
        return vector<int>(result.begin(), result.end());
    }
};

        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result;

        // Check common elements in nums2
        for(int num : nums2) {
            if(set1.count(num)) {
                result.insert(num);
            }
        }

        // Convert result set into vector
        return vector<int>(result.begin(), result.end());
    }
};
