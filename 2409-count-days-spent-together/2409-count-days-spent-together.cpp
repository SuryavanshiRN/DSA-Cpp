class Solution {
public:
    int findDays(string date, vector<int>& presum){
        int month = stoi(date.substr(0, 2));
        int days = stoi(date.substr(3));

        return presum[month - 1] + days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> presum(13, 0);
        presum[1] = 31;
        for(int i=2; i<13; i++){
            presum[i] = presum[i-1] + monthDays[i-1];
        }

        int arriveAliceDays = findDays(arriveAlice, presum);
        int leaveAliceDays = findDays(leaveAlice, presum);
        int arriveBobDays = findDays(arriveBob, presum);
        int leaveBobDays = findDays(leaveBob, presum);

        int start = max(arriveAliceDays, arriveBobDays);
        int end = min(leaveAliceDays, leaveBobDays);

        int total = end - start + 1;

        return total < 0? 0: total;
    }
};