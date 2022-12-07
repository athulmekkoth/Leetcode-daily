class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int res=r;
        while(l<r)
        {
            int penality=(l+res)/2;
            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>penality){
                if(nums[i]%penality==0)
                {
                    count+=nums[i]/penality-1;
                } 
                    else
                    {
                        count+=nums[i]/penality;
                        
                    }
                }
            }
            if(count<=maxOperations)
            {
                res=penality;
                r=penality;
            }
            else
            {
                l=penality+1;
            }
        }
        return res;
    }
};