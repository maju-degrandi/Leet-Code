class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        vector<int> st1(256,0);
        vector<int> st2(256,0);

        for(int i = 0; i < s.size(); i++)
        {
            st1[int(s[i])]++;
            st2[int(t[i])]++;
        }

        for(int i = 0; i < 256; i++)
            if(st1[i] != st2[i]) return false;

        return true;
    }
};
