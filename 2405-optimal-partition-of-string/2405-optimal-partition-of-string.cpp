class Solution {
public:
    int partitionString(string s) {
       set<char>st;
        int count=1;
        for(auto it:s)
        {
            if(st.find(it)!=st.end())
            {
                st.clear();
                count++;
            }
           
            st.insert(it);
            
        }
        return count;
    }
};