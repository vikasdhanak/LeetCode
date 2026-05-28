class Solution {
public:
    bool rotateString(string s, string goal) {

       if (s.size() != goal.size()) return false;
        if(s==goal){
            return true;
        }



        
        s+=s;  // doubling the size of s 
        if(s.find(goal)!= string::npos){  // checking if the goal is a part of s or not (substring or not and this is the built in function remember it)
            return true;
        }

        return false;


    }
    
};