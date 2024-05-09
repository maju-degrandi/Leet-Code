class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ans = true;
        for(int i = 0; i < 26; i++)
        {
            ans = ans && count(ransomNote.begin(), ransomNote.end(), char('a' + i)) 
                         - count(magazine.begin(), magazine.end(), char('a' + i)) <= 0;
            if(ans == false) return false;
        }
        return ans;
    }
};
