class Solution {
public:
    bool isPalindrome(string s) {
        string ns;
        for(int i = 0; i < s.length(); i++)
        {
            char c = tolower(s[i]);
            if(c >= 48 && c <= 57) ns.push_back(c);
            else if(c >= 97 && c <= 122) ns.push_back(c);
        }

        for(int i = 0; i < ns.length()/2; i++)
            if(ns[i] != ns[ns.length() - 1 - i]) return false;
        
        return true;
    }
};
