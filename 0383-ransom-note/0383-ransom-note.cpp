class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);  // For lowercase letters a-z
        
        for (char c : magazine) {
            count[c - 'a']++;
        }
        
        for (char c : ransomNote) {
            if (count[c - 'a'] == 0) return false;  // Not enough of c
            count[c - 'a']--;
        }
        
        return true;
    }
};
