class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> m;
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            res += m[nums[i]];
            m[nums[i]]++;
        }

        return res;
    }
};
