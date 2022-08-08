class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector <int> neww;
      for(int i=0;i<n;i++)
      {
          neww.push_back(nums[i]);
          neww.push_back(nums[i+n]);
      }
       return neww;
    
    }
};
