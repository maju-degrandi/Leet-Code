class Solution {
public:
    int countTime(string time) {
        int hours = 1;
        int mins = 1;

        if(time[3] == '?') mins *= 6;
        if(time[4] == '?') mins *= 10;

        if(time[1] == '?' && (time[0] == '0' || time[0] == '1')) hours *= 10;
        else if(time[1] == '?' && time[0] == '2') hours *= 4;

        if(time[0] == '?' && time[1] == '?') hours = 24;

        else if(time[0] == '?' && (time[1] - '0') > 3) hours *= 2;
        else if(time[0] == '?' && (time[1] - '0') <= 3) hours *= 3;

        return hours*mins;
    }
};
