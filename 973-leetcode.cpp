class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                        greater<pair<int, pair<int, int>>>> minheap;
        
        for(auto point : points)
        {
            int d = pow((point[0]),2) + pow((point[1]),2);
            minheap.push({d, {point[0], point[1]}});
        }
        vector<vector<int>> ans;
        for(int i = 0; i < k; i++)
        {
            auto min = minheap.top();
            ans.push_back({min.second.first, min.second.second});
            minheap.pop();
        }
        return ans;
    }
};
