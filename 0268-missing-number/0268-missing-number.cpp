class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            ans=nums.size();
            if(!binary_search(nums.begin(), nums.end(), i))
           
            {
                 ans=i;
                break;
            }
        }
        return ans;
        
    }
};