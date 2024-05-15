class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        if(color != oldcolor) dfs(image, sr, sc, color, oldcolor);

        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int oldcolor)
    {
        if(image[sr][sc] != oldcolor) return;

        image[sr][sc] = color;
        if(sr - 1 >= 0) 
            dfs(image, sr-1, sc, color, oldcolor);
        if(sr + 1 < image.size()) 
            dfs(image, sr+1, sc, color, oldcolor);
        if(sc - 1 >= 0) 
            dfs(image, sr, sc-1, color, oldcolor);
        if(sc + 1 < image[0].size()) 
            dfs(image, sr, sc+1, color, oldcolor);
        
    }
};
