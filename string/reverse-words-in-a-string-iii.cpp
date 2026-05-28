class Solution {
public:

    void reverse(int st,int e,string &s){
             
            while(st<e){
                swap(s[st++],s[e--]);
                
            }
        }


    string reverseWords(string s) {
        int i = 0;
        int st = 0;

        while(i<=s.size()){
            if(i==s.size() || s[i]==' '){
                reverse(st,i-1,s);
                st = i+1;

                
                
            }
            i++;
        }
        return s;
    }

};