class Solution {
public:
    int maxDifference(string s) {
        vector<int> arr(26,0);
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        int Mx=0;
        int Mn=INT_MAX;
        for(int i=0;i<26;i++){
            if(arr[i]==0) continue;
            if(arr[i]%2==1){
                Mx=max(Mx,arr[i]);
            }
            else if(arr[i]%2==0){
                Mn=min(Mn,arr[i]);
            }
        }

        return Mx -Mn;
    }
};