class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }

    int atMostK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int l = 0, res = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (freq[nums[r]] == 0) k--;  // New unique element
            freq[nums[r]]++;

            while (k < 0) {
                freq[nums[l]]--;
                if (freq[nums[l]] == 0) k++;
                l++;
            }

            res += r - l + 1;
        }

        return res;
    }
};
