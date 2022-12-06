

class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        queue<int>se;
        int count=0;
        int ans=0;
     for(int i=0;i<s.size();i++)
        {
            se.push(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
             if(se.size()==k)
            { 
                 ans=max(ans,count);
                 char ch=se.front();
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                count--;
            }
                 se.pop();
              
                
            }
           
          
           
        }
        return ans;
        
        
    }
};