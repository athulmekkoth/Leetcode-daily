class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>cd;
            int count=0;
           for(int i=0;i<s.size();i++)
           {
               cd[s[i]]++;
           }
        for(int i=0;i<t.size();i++)
        {
            cd[t[i]]--;
        }
     for(auto it:cd)
     {
         count+=abs(it.second);
     }
        return count;
            
    }
};