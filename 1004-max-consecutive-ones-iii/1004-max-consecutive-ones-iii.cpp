class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size(),ans=0,zr=0;
        while(j<n){
            if(nums[j]==0)
            {
                zr++;
            }
            while(zr>k)
            {
                if(nums[i]==0)
                {
                    zr--;
                }  
                  i++;
            }
       
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};