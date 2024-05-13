class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st; 
        vector<int> id;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'
               || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
            {
                id.push_back(i);
                st.push(s[i]);
            }
        }
        int j = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if (st.empty()) return s;
            if(id[j] == i)
            {
                s[i] = st.top();
                st.pop();
                j++;
            }
        }
        return s;
    }
};
