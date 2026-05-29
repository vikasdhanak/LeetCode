class Solution {
  public:
    vector<int> findMajority(vector<int>& v) {
        // Code here
        int n  = v.size();
        int el1 = 0,el2 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i =0;i<n;i++){
            if(el1==v[i]){
                cnt1++;
            }
            else if(el2==v[i]){
                cnt2++;
                
            }
            else if(cnt1==0){
                el1 = v[i];
                cnt1 = 1;
            }
            else if(cnt2==0){
                el2 = v[i];
                cnt2=1;
            }
            else{
                cnt1;
                cnt2--;
            }
        }
        cnt1=cnt2= 0;
        for(int i = 0;i<n;i++){
            if(el1 == v[i]){
                cnt1++;
            }
            else if(v[i]==el2)cnt2++;
        }
        vector<int>ans;
        if(cnt1>n/3)ans.push_back(el1);
        if(cnt2>n/3)ans.push_back(el2);
    }
};