class Solution {
public:
    bool isAnagram(string txt, string pat) {
        unordered_map<char,int>mp;
        if (txt.size() != pat.size()) return false;
        for(int i =0;i<pat.size();i++){
            mp[pat[i]]++;
        }
        for(auto it:txt){
            if(mp.find(it)!=mp.end()){
                mp[it]--;
                if(mp[it]==0){
                    mp.erase(it);
                }
                
            }
            else{
                    return false;
            }
        }
        return mp.empty();
    }
};


