class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int ,int>s1;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=s1[nums[i]]++;
        }
        return ans;
    }
};
