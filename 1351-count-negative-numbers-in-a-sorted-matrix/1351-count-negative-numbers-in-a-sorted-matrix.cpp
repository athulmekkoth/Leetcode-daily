class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int M=grid.size(),N=grid[0].size();
        int row=M-1,col=0;
        while(row>=0 && col<N)
        {
            if(grid[row][col]<0)
            {
                count+=(N-col);
                row--;
            }
            else
            {
                col++;
            }
        }
        return count;
        
    }
};