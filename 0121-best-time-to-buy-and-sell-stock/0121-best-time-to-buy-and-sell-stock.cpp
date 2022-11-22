class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,maxe=0;
        int i=0,j=i+1;
        while(j<prices.size())
        {
         
            if(prices[i]<prices[j])
            {
                int ans=prices[j]-prices[i];
                maxe=max(ans,maxe);
                   
            }
            else
            i=j;
            j++;
                
        }
        
        return maxe;
        
    }
};