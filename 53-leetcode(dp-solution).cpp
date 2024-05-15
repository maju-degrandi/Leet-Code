class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int maxS = curr;
        for(int i = 1; i < nums.size(); i++)
        {
            curr = max(nums[i], curr + nums[i]);
            maxS = max(curr, maxS);
        }
        return maxS;
    }
    int max(int v1, int v2)
    {
        if (v1 > v2) return v1;
        else return v2;
    }
};
