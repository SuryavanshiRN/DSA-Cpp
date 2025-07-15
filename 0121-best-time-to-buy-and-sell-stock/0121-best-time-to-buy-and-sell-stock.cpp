class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnp = INT_MAX;
        int mxp = 0;
        
        for (int p : prices) {
            mnp = min(mnp, p);
            mxp = max(mxp, p - mnp);
        }
        
        return mxp;
    }
};