class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int maxf = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            maxf = max(maxf, m[nums[i]]);
        }
        
        unordered_map<int, vector<int>> fm;
        for(auto it:m)
            fm[it.second].push_back(it.first);
        
        vector<int> ans;
        int count = 0;
        for(maxf; maxf > 0; maxf--)
        {
            if(fm.find(maxf) != fm.end())
            {
                for(int i = 0; i < fm[maxf].size(); i++) 
                {
                    ans.push_back(fm[maxf][i]);
                    count++;
                    if(count == k) return ans;
                }
            }
        }

        return ans;
    }
};
