class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid[0].size();
        int ngrids = (1 + (n-3));
        vector<vector<int>> ans(ngrids);
        
        for(int i = 0; i < ngrids; i++)
        {
            vector<int> v(ngrids, 0);
            ans[i] = v;
        }

        for(int i = 0; i < n-2; i++)
            for(int j = 0; j < n-2; j++)
                ans[i][j] = findmax(i,j,grid);
            
        return ans;
    }
    int findmax(int i, int j, vector<vector<int>>& grid)
    {
        int maxlocal = max(grid[i][j], grid[i+1][j], grid[i+2][j],
                       grid[i][j+1], grid[i+1][j+1], grid[i+2][j+1],
                       grid[i][j+2], grid[i+1][j+2], grid[i+2][j+2]);
        return maxlocal;
    }
    int max(int v1, int v2, int v3, int v4, int v5, int v6, int v7, int v8, int v9)
    {
        int max = v1;
        if(v2 > max) max = v2;
        if(v3 > max) max = v3;
        if(v4 > max) max = v4;
        if(v5 > max) max = v5;
        if(v6 > max) max = v6;
        if(v7 > max) max = v7;
        if(v8 > max) max = v8;
        if(v9 > max) max = v9;

        return max;
    }
};
