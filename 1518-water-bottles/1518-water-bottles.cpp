class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int m = numBottles;
        int ans = m;
        while(m>=numExchange){
            int rem = m % numExchange;
            m = m/numExchange;
            ans = ans + m;
            m = m + rem;
        }
        return ans;
    }
};