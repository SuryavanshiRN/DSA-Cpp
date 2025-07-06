class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        // Check if the three sides satisfy the triangle inequality
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";  // Not a valid triangle
        }

        // Determine the type of triangle
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";  // All sides are equal
        } else if (nums[0] == nums[1] || nums[1] == nums[2]) {
            return "isosceles";  // Exactly two sides are equal
        } else {
            return "scalene";  // All sides are different
        }
    }
};