class Solution {
public:
    int smallestEvenMultiple(int n) {
        while(n%2==0){
            return n;
        }
        return n*2;
    }
};