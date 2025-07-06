class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int l=0;
        int r=0;
        int zeros = 0;
        int maxlen = 0;
        int len;
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                zeros += 1;
            }
            if(zeros > k){
                if(nums[l]==0)  zeros--;
                l++;
            }
            if(zeros <= k){
                len = r - l +1;
                maxlen = max(maxlen,len);
            }
        }

        return maxlen;
    }
};