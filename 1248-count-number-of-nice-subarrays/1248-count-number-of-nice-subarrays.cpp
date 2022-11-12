class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        
        int count=0,ans=0,odd=0;
      while(j<nums.size())
        {
            if(nums[j]%2!=0)
            {
                odd++;
                count=0;
            }
         while(odd==k)
            {
             count++;
             odd -= nums[i++]&1;   
            }
            ans+=count;
            
            j++;
            
      }
        return ans;
    }
};