class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>st;
        for(int i=0;i<s.size();i++)
        {
            st[s[i]]=i;
            
            
        }
        vector<int>ans;
        int prev=0,maxi=0;
        for(int i=0;i<s.size();i++)
        {
           
            
                maxi=max(maxi,st[s[i]]);
         
                if(i==maxi)
                {
                    ans.push_back(maxi - prev+1);
                        prev=i+1;
                }

                    
            
        }
        return ans;
        
    }
};