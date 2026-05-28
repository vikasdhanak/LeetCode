class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balance_counter = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(balance_counter>0){
                    result+= s[i];
                }
                balance_counter++;
            }
            else{
                balance_counter--;

                if(balance_counter>0){
                    result += s[i];
                }
            }
        }
        return result;
    }
};