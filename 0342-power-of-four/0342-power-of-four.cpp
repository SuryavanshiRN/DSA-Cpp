class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;  // Ensure n is positive
        while (n % 4 == 0) {
            n /= 4;  // Keep dividing by 3
        }
        return n == 1;  // If we reach 1, it's a power of 3
    }
};

