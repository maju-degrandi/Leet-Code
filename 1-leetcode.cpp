class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<pair<int, int>> aux;

        for(int i = 0; i < nums.size(); i++)
            aux.push_back(make_pair(nums[i], i));
        
        sort(aux.begin(), aux.end());
        int i = 0, j = aux.size()-1;
        while(i < j)
        {
            int sum = aux[i].first + aux[j].first;
            if(sum > target) j--;
            else if(sum < target) i++;
            else 
            {
                ans.push_back(aux[i].second);
                ans.push_back(aux[j].second);
                break;
            }
        }
        
        return ans;
    }
};
