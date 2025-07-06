class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int result=0;
        vector<int> mp(3,0); 
        for(r=0;r<n;r++){
            char ch = s[r];
            mp[ch - 'a']++;
            while(mp[0]>0 && mp[1]>0 && mp[2]>0){
                result += n-r;
                mp[s[l]-'a']--;
                l++;
            }
            
        }
        return result;
    }
};