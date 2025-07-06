class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double M;
        for(int i=0; i<k;i++){
            sum += nums[i];
        }
        M = sum;

        for(int i=k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[i-k];
            M = max(M, sum);
        }

        double result = M/k;

        return result;

    }
};