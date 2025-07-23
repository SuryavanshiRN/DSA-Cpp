class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxSum = nums[0], currMax = 0;
        int minSum = nums[0], currMin = 0;
        
        for (int num : nums) {
            currMax = max(currMax + num, num);
            maxSum = max(maxSum, currMax);
            
            currMin = min(currMin + num, num);
            minSum = min(minSum, currMin);
            
            total += num;
        }
        
        return (maxSum > 0) ? max(maxSum, total - minSum) : maxSum;
    }
};
