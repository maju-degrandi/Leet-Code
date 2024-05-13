class Logger {
private:
    map<string, int> table;
    int INTERVAL = 10;

public:
    Logger() {
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(table.find(message) != table.end())
        {
            if(table[message] <= timestamp)
                table[message] = timestamp + INTERVAL;
            else return false;
        }
        else
            table[message] = timestamp + INTERVAL;
        
        return true;
    }
};
