class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> res;
        for(int i = 0; i < nums.size(); i++)
            if(res.find(nums[i]) != res.end())
                res.erase(nums[i]);
            else
                res.insert(nums[i]);

        return *next(res.begin(),0);
    }
};
