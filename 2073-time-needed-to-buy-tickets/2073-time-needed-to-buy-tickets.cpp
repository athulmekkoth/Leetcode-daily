class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        int tick=tickets[k];
     for(int i=0;i<tickets.size();i++)
          {
            
            if(tickets[i]<tick)
            {
                count+=tickets[i];
            }
            else
            {
                if(i<=k)
                {
                    count+=tick;
                }
                else
                {
                    count+=tick-1;
                }
            }
            
    
        }
        return count;
     
          
           
                
           
    
    }
   
};