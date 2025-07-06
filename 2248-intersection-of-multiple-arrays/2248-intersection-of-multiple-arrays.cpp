class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();  // Total number of subarrays

        // Count frequency of each element across all subarrays
        for (auto& arr : nums) {
            for (int num : arr) {
                freq[num]++;
            }
        }

        vector<int> result;
        for (auto& [key, value] : freq) {
            if (value == n) {  // Present in all arrays
                result.push_back(key);
            }
        }

        sort(result.begin(), result.end());  // Sort in ascending order
        return result;
    }
};