class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> mp;
        int maxlen=-1;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(mp.find(ch)==mp.end()){
                mp[ch]=i;
            }
            else{
                maxlen=max(maxlen,i-mp[ch]-1);
            }
        }

        return maxlen; 
    }
};