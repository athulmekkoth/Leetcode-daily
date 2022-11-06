class Solution {
public:
    int maxArea(vector<int>& height) {
        int width;
        int ht;
        int maxe=0;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            width=j-i;
            ht=min(height[j],height[i]);
            int area=ht*width;
            maxe=max(area,maxe);
            if(height[j]>height[i]){i++;}
            else if(height[i]>height[j]){j--;}
            else{
                i++;
                j--;
            }
        }
        return maxe;
        
    }
};