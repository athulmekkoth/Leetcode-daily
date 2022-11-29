class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>v;
        int small=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<target)small++;
            if(nums[i]==target)count++;
        } 
            for(int i=small;i<small+count;i++)
            {
                v.push_back(i);
            }
        
        return v;
        
    }
};