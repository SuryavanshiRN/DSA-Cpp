class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int n = strs.size();
        int Min = min(strs[0].size(),strs[n-1].size());
        
        for(int i=0;i<Min;i++){
            char c = strs[0][i];
            bool match = true;
            for(int j=1;j<n;j++){
                if(c != strs[j][i]){
                    match = false;
                    break;
                }
                
            }
            if(match == false){
                break;
            }
            else{
                ans.push_back(c);
            }
        }

        return ans;
    }
};









