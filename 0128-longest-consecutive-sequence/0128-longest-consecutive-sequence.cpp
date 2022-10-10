class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>n;
        for(int i=0;i<nums.size();i++)
        {
            n.insert(nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(n.find(nums[i]-1)!=n.end())
                continue;
            else
            {
                int count=0;
                int current=nums[i];
                while(n.find(current)!=n.end())
                {
                    count++;
                    current++;
                }
                 ans=max(count,ans);
            }
        }
        return ans;
    
        
        
    }
};