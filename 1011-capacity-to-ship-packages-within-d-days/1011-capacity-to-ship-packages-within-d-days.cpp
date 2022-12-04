class Solution {
public:
    bool isPossibleToShip(vector<int>& weights, int total_days, int min_capacity)
    {
        int days_so_far=1,load_for_a_day=0;
        for(int i=0;i<weights.size();i++)
        {
            load_for_a_day+=weights[i];
            if(load_for_a_day>min_capacity)
            {
                days_so_far++;
                load_for_a_day=weights[i];
            }
            if(days_so_far>total_days)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max_element=weights[0],sum=0,ans=-1,n=weights.size();
        for(int num:weights)
        {
            max_element=max(max_element,num);
            sum+=num;
        }
        while(max_element<=sum)
        {
            int min_weight = (max_element+sum)/2;
            if(isPossibleToShip(weights,days,min_weight))
            {
                sum=min_weight-1;
                ans=min_weight;
            }
            else
                max_element=min_weight+1;
        }
        return ans;
    }
};