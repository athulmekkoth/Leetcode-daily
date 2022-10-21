class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ar;
         vector<int>br;
        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                ar.push_back(nums[i]);
            }
            if(nums[i]>pivot)
            {
                br.push_back(nums[i]);
            }
            if(nums[i]==pivot)
            {
                count++;
            }
        }
        while(count!=0)
        {
            ar.push_back(pivot);
            count--;
        }
        for(int i=0;i<br.size();i++)
        {
            ar.push_back(br[i]);
        }
        return ar;
      
    }
};