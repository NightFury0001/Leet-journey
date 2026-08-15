class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j=0;
        int max=0,day=0;
        for(int i=1;i<prices.size();i++){
            if(prices[j]<prices[i]){
                {
                    if ((prices[i]-prices[j])>max){
                        max=prices[i]-prices[j];

                    }
                }
            }
            else{
                j=i;
            }
        }
        return max;
        
    }
};