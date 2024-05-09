class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> aux;
        for(int i = 0; i < nums.size(); i++)
        {
            if (find(aux.begin(), aux.end(), nums[i]) != aux.end()) return true;
            aux.insert(nums[i]);
        }
        return false;
    }
};
