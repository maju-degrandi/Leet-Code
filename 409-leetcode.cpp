class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(256, 0);
        for(int i = 0; i < s.length(); i++)
            count[s[i]]++;
        
        int res = 0;
        int aloneL = 0;
        for(int i = 0; i < 256; i++)
        {
            if(aloneL == 0 && count[i]%2 != 0) aloneL++;
            res += (count[i] / 2) * 2;
        }

        return res + aloneL;
    }
};
