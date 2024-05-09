class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> aux = strs;
        map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++)
        {
            sort(aux[i].begin(), aux[i].end());
            m[aux[i]].push_back(strs[i]);
        }

        vector<vector<string>> ans(m.size());
        int i = 0;
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            ans[i] = it->second;
            i++;
        } 
        return ans;
    }
};
