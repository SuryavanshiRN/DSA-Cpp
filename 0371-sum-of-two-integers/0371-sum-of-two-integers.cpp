class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int sum = a ^ b; // Sum bits without carry
            int carry = (a & b) << 1;  // Carry bits shifted left    
            a=sum;            
            b=carry;                 // Now add the carry in the next round
        }
        return a;
    }
};
