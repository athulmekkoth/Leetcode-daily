class Solution {
public:
    int minSetSize(vector<int>& arr) {
           unordered_map<int,int>n;
            int t;
        int k=arr.size()/2;
            for(int i=0;i<arr.size();i++)
            {
                n[arr[i]]++;
            }
        vector<int>fr;
        for(auto it:n)
        {
            fr.push_back(it.second);
        }
        sort(fr.begin(),fr.end());
            int first=0;
        int count=0;
        int i=fr.size()-1;
        while(first<k)
        {
            count++;
            first+=fr[i];
                i--;
        }return count;
 
        
        
    }
};