class Solution {

    int checkpalin(string s)
    {
        int i=0;
        int flag=0;
        int j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                flag=1;
            }
            i++;
            j--;
        }
        return flag;
     }
     public:
    string firstPalindrome(vector<string>& words) {
       for(int i=0;i<words.size();i++)
       {
           if(checkpalin(words[i])==0)
             return words[i];}
      
        return "";
        
    }
 
};