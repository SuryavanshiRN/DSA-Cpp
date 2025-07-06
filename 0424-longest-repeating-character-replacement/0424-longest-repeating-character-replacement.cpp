class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, maxCount = 0, res = 0;
        vector<int> freq(26, 0);

        for (int r = 0; r < s.length(); r++) {
            freq[s[r] - 'A']++;
            maxCount = max(maxCount, freq[s[r] - 'A']);

            while ((r - l + 1) - maxCount > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};
