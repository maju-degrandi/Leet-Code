class Solution {
public:

    int n, m;
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    queue<pair<pair<int,int>, int>> q;
    int fresh = 0;

    int orangesRotting(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        bool hasfresh = false;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 2) q.push({{i,j}, 0});
                if(grid[i][j] == 1) 
                {
                    hasfresh = true;
                    fresh++;
                }
            }
        }
        if(hasfresh == false) return 0;
        
        int mins = bfs(grid);
        if(fresh != 0) return -1;
        return mins;
    }

    int bfs(vector<vector<int>>& grid)
    {
        int time = -1;

        while(!q.empty())
        {
            pair<pair<int,int>, int> ind = q.front();
            int r = ind.first.first, c = ind.first.second, round = ind.second;
            q.pop();
            if(round > time) time++;

            for(auto [dx, dy] : directions)
            {
                int nr = r + dx, nc = c + dy;
                if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] == 1)
                {
                    q.push({{nr,nc}, round+1});
                    grid[nr][nc] = 2;
                    fresh--;
                }
            }
        }
        return time;
    }
};
