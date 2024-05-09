class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> setnums(nums.begin(), nums.end());
        return(nums.size() != setnums.size());
    }
};
