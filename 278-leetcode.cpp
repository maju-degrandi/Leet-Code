// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long ans, left = 0, right = n;
        while(left <= right)
        {
            long long mid = (left + right)/2;
            if(isBadVersion(mid))
            {
                ans = mid;
                right = mid - 1;
            }
            else 
                left = mid + 1;
        }
        return ans;
    }
};
