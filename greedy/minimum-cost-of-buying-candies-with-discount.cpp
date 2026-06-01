class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum = 0;
        if(cost.size() == 2){
            sum = cost[0] + cost[1];
            return sum;
        }
        int mincost  = 0;
        sort(cost.begin(), cost.end(), greater<int>());
        for(int i  = 2;i<cost.size();i+=2){
            cost.erase(cost.begin()+i);
        }
        for(int i = 0;i<cost.size();i++){
            mincost +=cost[i];
        }
        return mincost;


    }
};