class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i=0;
        vector<int>v;
        int j=numbers.size()-1;
        while(i<=j)
        {
          
            if(numbers[i]+numbers[j]==target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(numbers[i]+numbers[j]>target)
            {
                j--;
            }
            else{i++;}
        }
        return v;
    }
};