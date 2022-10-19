class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int st=0;
        for(int end=0;end<nums.size();end++)
        {
            if(nums[end]!=nums[st])
            {
                st++;
                nums[st]=nums[end];
                
            }
        }
        return st+1;
    }
};
           