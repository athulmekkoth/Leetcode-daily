class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>st;
        vector<int>v;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])!=st.end())
            {
                
              st[s[i]]++;
                
            }
            else
            {
                st[s[i]]=1;
            }
        }
        int k=st.begin()->second;
          for(auto it:st)
        {
            if(it.second !=k)
            {
                flag=1;
            }
            
        }
        
      
        return (flag==1) ? false : true;
    }
    
};