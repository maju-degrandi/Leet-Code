class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> letters1 (26,0);
        vector<int> letters2 (26,0);
        for(int i = 0; i < ransomNote.length(); i++)
            letters1[ransomNote[i] - 'a']++;
        
        for(int i = 0; i < magazine.length(); i++)
            letters2[magazine[i] - 'a']++;
        
        for(int i = 0; i < 26; i++)
            if(letters1[i] > letters2[i]) return false;
        
        return true;
    }
};
