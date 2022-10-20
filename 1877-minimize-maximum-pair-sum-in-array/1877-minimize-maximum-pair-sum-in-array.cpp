class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int k=-1;
        for(int i=0;i<nums.size()/2;i++)
        {
            k=max(k,nums[i]+nums[j]);
                j--;
        }
        return k;
      
    }
};