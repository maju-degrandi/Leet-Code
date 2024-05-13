class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> v(101, 0);
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            res += v[nums[i]];
            v[nums[i]]++;
        }

        return res;
    }
};
