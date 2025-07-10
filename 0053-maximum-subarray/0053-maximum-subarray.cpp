class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxsum=INT_MIN;
        for(int r=0;r<n;r++){
            sum += nums[r];
            if(sum>maxsum) maxsum=sum;
            if(sum<0) sum=0;
        }

        return maxsum;

    }
};