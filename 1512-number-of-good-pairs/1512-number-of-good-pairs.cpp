class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int pairs = 0;
        for (int num : nums) {
            pairs += count[num];  // Add how many times we've seen num before
            count[num]++;         // Increment count of num
        }
        return pairs;
    }
};
