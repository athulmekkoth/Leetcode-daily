class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>n;
        map<int,bool>p;
        for(auto it :nums)
        {
            if(p.find(it)!=p.end())
            {
                n.push_back(it);
            }
            else
            {
                p[it]=true;
            }   
        }
        return n;
        
    }
};