class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        map<int, int> freq;
        for (int x : basket1) freq[x]++;
        for (int x : basket2) freq[x]--;

        vector<int> excess;
        for (auto [val, count] : freq) {
            if (count % 2 != 0) return -1; 
            for (int i = 0; i < abs(count) / 2; ++i) {
                excess.push_back(val);
            }
        }

        if (excess.empty()) return 0;

        sort(excess.begin(), excess.end());

        int minElem = min(*min_element(basket1.begin(), basket1.end()),
                          *min_element(basket2.begin(), basket2.end()));

        long long cost = 0;
        for (int i = 0; i < excess.size() / 2; ++i) {
            cost += min(2LL * minElem, 1LL * excess[i]);
        }
        return cost;
    }
};
