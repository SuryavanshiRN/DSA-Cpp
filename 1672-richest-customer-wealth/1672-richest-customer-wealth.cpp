class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int Max=0;
        for(int i=0;i<accounts.size();i++){
            int k=0;
            for(int j=0;j<accounts[0].size();j++){
                k += accounts[i][j];
            }
            if(k>Max)   Max=k;

        }
        return Max;
    }
};