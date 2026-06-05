class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& freinds) {
        
        unordered_set<int>st(freinds.begin() , freinds.end());
        vector<int>result;

        for(int it:order){
            if(st.count(it)){
                result.push_back(it);
            }
        }
        return result;
    }
};