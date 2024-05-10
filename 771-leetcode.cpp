class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> j(256,0);
        vector<int> s(256,0);
        for(int i = 0; i < jewels.size(); i++)
            j[jewels[i]]++;
        for(int i = 0; i < stones.size(); i++)
            s[stones[i]]++;

        int count = 0;
        for(int i = 0; i < 256; i++)
            if(j[i] <= s[i] && j[i] != 0) count += s[i];

        return count;
    }
};
