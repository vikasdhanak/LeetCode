class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n =nums.size();
        vector<int>temp;
        // putting all non zeros element at temp
        for(int i = 0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);

            }

        }
        // now putting the temp elements in array
            for(int i =0;i<temp.size();i++)
            {
                nums[i] = temp[i];
            }

            int nz = temp.size();
            for(int i =nz;i<n;i++)
            {
                nums[i] = 0;
            }
        }
    };
