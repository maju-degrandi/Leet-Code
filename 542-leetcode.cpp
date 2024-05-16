class Solution {
public:
    int m, n;
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    queue<pair<int, int>> q;

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 0) q.push({i, j});
                if(mat[i][j] == 1) mat[i][j] = -1;
            }
        }
        
        bfs(mat);
        return mat;
    }

    void bfs(vector<vector<int>>& mat)
    {
        while(!q.empty())
        {
            pair<int, int> ind = q.front();
            q.pop();
            int r = ind.first, c = ind.second;

            for(auto [dx, dy] : directions)
            {
                int nr = r + dx;
                int nc = c + dy;
                if(nr >= 0 && nc >= 0 && nr < n && nc < m && mat[nr][nc] == -1)
                {
                    mat[nr][nc] = mat[r][c] + 1;
                    q.push({nr,nc});
                }
            }
        }
    }
};
