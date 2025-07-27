class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int u = n-1;
        while(l<u){
            int m = l + (u-l)/2;
            if(nums[m] > nums[u]) l = m + 1;
            else u = m;
        }
        return nums[l];
    }
};