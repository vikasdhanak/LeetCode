class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        int n = txt.length();
        int k = pat.length(); // window size will be the same lenth of the patatern size 
        unordered_map<char,int>mp;
        for(int i = 0;i<k;i++){
            mp[pat[i]]++; // store the char and the fequency of pattern
        }
        int count  = mp.size(); // count will be equal to the distinct element in the mp

        vector<int>ans; //it is for the answer
        
        int i = 0;
        int j =0;
        while(j<n){
            if(mp.find(txt[j])!=mp.end()){
                mp[txt[j]]--;
                if(mp[txt[j]]==0){
                    count--;
                }
            }

            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                if(count==0){
                    ans.push_back(i); // if count is 0 push the first index 
                }

                if(mp.find(txt[i])!=mp.end()){ // slide the window and inrease the freq if the element is in the map 
                    mp[txt[i]]++;
                    if(mp[txt[i]]==1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};