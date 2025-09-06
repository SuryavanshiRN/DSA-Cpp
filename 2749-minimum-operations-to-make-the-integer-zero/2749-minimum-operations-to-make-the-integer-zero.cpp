class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int t = 0;
        while(true){
            long long  val = num1 - t*num2;
            if(val < 0) return -1;
            if(__builtin_popcountll(val) <= t && t <= val) return t;
            t++;
        }
        return t;
    }
};