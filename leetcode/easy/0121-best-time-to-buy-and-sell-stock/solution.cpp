class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxi=0;;
        for(int i=0;i<prices.size();i++){
            if(prices[i+1]<min){
                min=prices[i+1];
            }
            int currentprofit=prices[i]-min;
            maxi=max(currentprofit,maxi);
        }return maxi;
    }
};