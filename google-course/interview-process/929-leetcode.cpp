class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> set;
        for(int i = 0; i < emails.size(); i++)
        {
            string s;
            bool flag = true;
            int j = 0;
            while(emails[i][j] != '@')
            {
                if(emails[i][j] == '+') 
                    flag = false;
                if(flag == true && emails[i][j] != '.') 
                    s += emails[i][j];
                j++;
            }
            for(j = j; j < emails[i].size(); j++)
                s += emails[i][j];
            
            set.insert(s);
        }
        return set.size();
    }
};
