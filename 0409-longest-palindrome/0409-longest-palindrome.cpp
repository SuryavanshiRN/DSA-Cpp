class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }

        int count = 0;
        bool flag = false;

        for(const auto& pair : mp) {

            if(pair.second %2 == 0){
                count += pair.second;
            }
            
            else{
                count += pair.second -1;
                flag = true;
            }

        }

        if(flag) return count + 1;
        return count;
    }
};