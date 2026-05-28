class Solution {
public:
    string reverseWords(string s) {
        string words = "";
        string ans= "";
        int i = 0;
        while(i<s.size()){
            if(s[i]!=' '){ // if the s[i] is not equal to space
                words+=s[i]; // add it to words
            }

            else{
                if(words.size()>0){
                    reverse(words.begin(),words.end());
                    ans+= words+" "; // reverse the word and add it to ans with a space
                    words=""; // then empty the word;
                }

                

            }
            i++;
            
        }

        if(words.size()>0){ // if something left in the words just reversse it also and add to ans
            reverse(words.begin(),words.end());
            ans+= words;
        }

        // reveersing the whole ans
        reverse(ans.begin(),ans.end());

        // TRIMMING THE LEADING SPACE 
        while(!ans.empty() && ans[0]==' '){
            ans.erase(ans.begin());
        }

        //TRIMMING  TRAILING SPACE IF PRESENT
        while(!ans.empty() && ans.back()== ' '){
            ans.pop_back();
        }

        return ans;
    
    }
};