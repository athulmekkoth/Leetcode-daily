class Solution { 
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
         //  Find Length of arrays for defining the size of column of rows
            int m=nums1.size();
            int n=nums2.size();
        
         // Define a table for memoization
            int dp[m+1][n+1];
            memset(dp,0,sizeof(int)*(m+1)*(n+1));
        
        // Initalize some variable
            int result=0;
        
        // Apply tablulation DP
           for(int i=1;i<=m;i++)
               for(int j=1;j<=n;j++)
               {
                   if(nums1[i-1]==nums2[j-1])
                   {dp[i][j]=1;
                      dp[i][j]+=dp[i-1][j-1];}
                 
                   result=max(dp[i][j],result);
               }
        
        // Return answer
          return result;       
    }
};