class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2) return false;
        int sum=0;
        for(int i=1;i<n;i++){
            sum=0;
            for(int j=0;j<=i;j++){
                sum += nums[j];
            }
            if(sum%k==0) return true;
            else if(sum==0) return true;
        }
        return false;
    }
};