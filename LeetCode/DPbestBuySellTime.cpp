class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==0){
            return 0;
        }
        int DP[prices.size()];
        DP[0]=0;
        int maxprof=0;
        int min=prices.at(0);
        for (int i=1;i<prices.size();i++){
            if (prices.at(i)<prices.at(i-1)){
                DP[i]=prices.at(i);
                if (prices.at(i)<min){
                    min=prices.at(i);
                }
            }else{
                DP[i]=prices.at(i)-min;
                if (DP[i]>maxprof){
                    maxprof=DP[i];
                }
            }
        }
        return maxprof;
    }
};