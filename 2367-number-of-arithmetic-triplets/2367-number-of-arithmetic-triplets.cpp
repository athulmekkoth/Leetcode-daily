class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       map<int,bool>n;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            n[nums[i]]=true;
        }
        for(auto &it:nums)
        {
            if(n[it+diff] && n[it+2*diff])
          
            {
                count++;
            }
        }
        return count;
    }
};