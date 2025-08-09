class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

        long long total = 0;

        for(int i = 0; i<n;i++){
            int mi = nums[i];
            int mx = nums[i];
            for(int j=i;j<n;j++){
                mi = min(mi, nums[j]);
                mx = max(mx, nums[j]);

                total = total + (mx - mi);
            }
        }

        return total;
    }
};