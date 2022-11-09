class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        
   
       for(int j=0;j<arr.size()-k+1;j++){
         if(j!=0){
            sum-=arr[j-1];
             sum+=arr[j+k-1];}
            
           
          
           
            if(sum/k>=threshold)
            {count++;}
            
            
        }
        return count;
        
    
       
            
           
            
         
        

        
    }
};