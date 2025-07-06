class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;  // Ensure n is positive
        while (n % 3 == 0) {
            n /= 3;  // Keep dividing by 3
        }
        return n == 1;  // If we reach 1, it's a power of 3
    }
};
