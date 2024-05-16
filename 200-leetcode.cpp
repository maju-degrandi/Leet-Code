class Solution {
public:
    int nr, nc;
    int numIslands(vector<vector<char>>& grid) {
        nr = grid.size();
        nc = grid[0].size();

        int n_islands = 0;
        for(int r = 0; r < nr; r++)
        {
            for(int c = 0; c < nc; c++)
            {
                if(grid[r][c] == '1')
                {
                    n_islands++;
                    dfs(grid, r, c);
                }
            }
        }
        return n_islands;
    }

    void dfs(vector<vector<char>>& grid, int r, int c)
    {
        grid[r][c] = '0';
        if( r - 1 >= 0 && grid[r-1][c] == '1') dfs(grid, r - 1, c);
        if( r + 1 < nr && grid[r+1][c] == '1') dfs(grid, r + 1, c);
        if( c - 1 >= 0 && grid[r][c-1] == '1') dfs(grid, r, c - 1);
        if( c + 1 < nc && grid[r][c+1] == '1') dfs(grid, r, c + 1);
    }
};
