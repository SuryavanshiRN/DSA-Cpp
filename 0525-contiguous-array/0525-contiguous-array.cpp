class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int maxlen =0;
        for(int i=0;i<n;i++){
            int balance = 0;
            for(int j=i;j<n;j++){
                if(nums[j]==0) balance++;
                else balance--;
                if(balance==0){
                    maxlen = max(maxlen,j-i+1);
                }
            }
        }

        return maxlen;
    }
};