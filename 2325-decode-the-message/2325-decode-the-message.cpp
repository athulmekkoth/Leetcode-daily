class Solution {
public:
    string decodeMessage(string key, string message) {
        string str="";
      
        map<char,char> ab;
        int j=0;
        for(int i=0;i<key.size();i++) {
            if(ab.find(key[i])==ab.end() and key[i]!=' ') 
            {
                ab[key[i]]=j+'a'; 
                j++;
            }
        }
       
        for(int i=0;i<message.size();i++)
        {
            if(message[i]==' ')
            {
                str += ' ';
            }
            else{
            auto it=ab.find(message[i]);
            str=str+it->second;}
            
            
        }
        return str;
    }
        
};