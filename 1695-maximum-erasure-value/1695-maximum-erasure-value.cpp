class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>s;
        int sum=0;
        int ans=0;
        for(int i=0, j=0;j<nums.size();j++)
        {
            while(s.find(nums[j])!=s.end())
            {
                s.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            s.insert(nums[j]);
            sum+=nums[j];
            ans=max(sum,ans);
           
        }
        return ans;
        
        
    }
};