class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool>m;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            int first=nums1[i];
            for(int j=0;j<nums2.size();j++)
            {
                if(first==nums2[j])
                    m[first]=true;
            }
        }
        for(auto it:m)
        {
            ans.push_back(it.first);
        }
        return ans;
    }
};