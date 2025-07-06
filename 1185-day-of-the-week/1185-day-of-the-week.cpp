class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        struct tm timeStruct = {};
        timeStruct.tm_mday = day;
        timeStruct.tm_mon = month - 1;  // Months are 0-based in tm structure
        timeStruct.tm_year = year - 1900; // Years count from 1900 in tm structure

        mktime(&timeStruct);  // Normalize and compute weekday

        string daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return daysOfWeek[timeStruct.tm_wday];
    }
};