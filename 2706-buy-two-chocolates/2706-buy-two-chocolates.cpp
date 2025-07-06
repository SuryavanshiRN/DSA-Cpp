class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int firstMinCost = INT_MAX;
        int secondMinCost = INT_MAX;

        for (int p : prices) {
            if (p < firstMinCost) {
                secondMinCost = firstMinCost;
                firstMinCost = p;
            } else {
                secondMinCost = min(secondMinCost, p);
            }
        }

         if((firstMinCost + secondMinCost)>money) return money;

        return  money - (firstMinCost + secondMinCost);      
    }
};