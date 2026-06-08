class Solution {
public:
    bool detectCapitalUse(string word) {
        int countcapital = 0;
        for(char ch : word){
            if(isupper(ch)){
                countcapital++;
            }
        }
        int n = word.size();
        if(countcapital==n)return true; //  all are capital it means
        if(countcapital==0)return true; //  no work is capital that means
        if(countcapital==1)return true; // first leter is capital it means


        return false;



    }
};