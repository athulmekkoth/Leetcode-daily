class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>s;
        for(int i=0;i<numRows;i++)
        {
            vector<int>n(i+1,1);
     
       
            for(int j=1;j<i;j++)
            {
                n[j]=s[i-1][j]+s[i-1][j-1];
                
            }
            s.push_back(n);
      
            
        }
        return s;
        
      
	
		
		
	
    }
};