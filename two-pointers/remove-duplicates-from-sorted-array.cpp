class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n  =  nums.size(); // Step 1: Get the size of the array
        int i =0;  // Step 2: 'i' will track the position of the last unique element
        for(int j = 1;j<n ;j++)   // Step 3: Start from the second element
        {
            if(nums[j]!=nums[i]){  // Step 4: If nums[j] is unique
                nums[i+1] =nums[j];   // Step 5: Move it to the next position of unique section
                i++; // Step 6: Update 'i' to new last unique element index
            }
        }
        return i+1;  // Step 7: Total number of unique elements = i + 1
    }
        
            
        
    };
// for more clearity go through notes wwritten below by me