class Solution {
public:
    string frequencySort(string s) {
      map<char,int>mp;
        priority_queue<pair<int,char>> pq;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
            pq.push(make_pair(it.second,it.first));
        
        while(!pq.empty())
        {
         int a=pq.top().first;
            char b= pq.top().second;
            for(int i=0;i<a;i++)
            {
                ans+=b;
            }
            pq.pop();
            
            
        }
        return ans;
    }
};