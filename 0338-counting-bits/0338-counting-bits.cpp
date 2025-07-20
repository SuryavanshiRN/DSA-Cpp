class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            int count=0;
            int bit = i;
            while(bit>0){
                count += bit&1;
                bit=bit>>1;
            }
            ans[i]=count;

        }
        return ans;
    }
};