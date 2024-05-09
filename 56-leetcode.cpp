class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int id = -1;
        for(auto interval : intervals)
        {
            if(ans.empty() || ans[id][1] < interval[0])
            {
                ans.push_back(interval);
                id++;
            }
    
            else
                if(ans[id][1] < interval[1]) 
                    ans[id][1] = interval[1];

        }
        return ans;
    }
};
