class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=101,prf=0;
        
        for(int i=0;i<prices.size();i++){
            if(low>prices[i]){
                low=prices[i];
            }
            if(i!=prices.size()-1){
                if(prf<prices[i+1]-low){
                    prf=prices[i+1]-low;
                }
            }
        }
        
        return prf;

    }
};
