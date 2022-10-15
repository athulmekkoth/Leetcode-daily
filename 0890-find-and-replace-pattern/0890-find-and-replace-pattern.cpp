class Solution {
public:
    
        vector<int> getpattern(string words)
        {
            unordered_map<char,int>m;
            vector<int>number;
            int index=1;
            for(int i=0;i<words.size();i++)
            {
                if(m.find(words[i])==m.end())
                {
                    m[words[i]]=index;
                    index++;
                    number.push_back(m[words[i]]);
                }
                else
                {
                    number.push_back(m[words[i]]);
                }
                }
            return number;
            }
        
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>v;
       for(int i=0;i<words.size();i++)
       {
           if(getpattern(words[i])==getpattern(pattern))
               
           {
               v.push_back(words[i]);
           }
       }
       return v;
    }
        
};