class Solution {
public:
    int newNum(int N){
        int newN = 0;
        while(N > 0){
            int d = N % 10;
            newN += d * d;
            N = N / 10;
        }
        return newN;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = newNum(n);
        }

        return n == 1;
    }
};
