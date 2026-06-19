class Solution {
public:
    bool isAnagram(string txt, string pat) {
        sort(txt.begin(), txt.end());
        sort(pat.begin(), pat.end());
        if(txt.size()!=pat.size()) return false;

        for(int i = 0;i<txt.size();i++){
            if(txt[i]!=pat[i]){
                return false;
            }
            
        }
    return true;
    }
};


