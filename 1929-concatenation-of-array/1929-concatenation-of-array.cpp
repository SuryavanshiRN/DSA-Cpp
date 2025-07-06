class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int k=n;
        vector<int> ans(n*2);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[k]=nums[i];
            k++;
        }

        return ans;
    }
};