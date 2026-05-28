class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        
        int n  = arr.size();
        for(int i = 0;i<n;i++){
            if(mp.find[nums[i]]!= mp.end()){
                if(i - mp[nums[i]]<=k){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }

        
        
    
     return false;
    }
   
};