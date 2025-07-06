class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left = 0;
        int right;
        int max_len = 0;

        for(right=0;right<s.size();right++){
            char c = s[right];
            while(window.count(c)){
                window.erase(s[left]);
                left++;
            }

            window.insert(c);
            max_len = max(max_len, right - left +1);
        }

        return max_len;
    }
};