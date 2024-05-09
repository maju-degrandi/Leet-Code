class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum(accounts.size(), 0);
        for(int i = 0; i < accounts.size(); i++)
        {
            for(int j = 0; j < accounts[i].size(); j++)
                sum[i] += accounts[i][j];
        }
        sort(sum.begin(), sum.end(), greater<int>());
        return sum[0];
    }
};
