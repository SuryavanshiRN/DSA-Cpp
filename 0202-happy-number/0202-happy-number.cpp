class Solution {
public:
    int getNext(int n){
        int newN = 0;
        while(n!=0){
            newN += (n%10)*(n%10);
            n /= 10;
        }
        return newN;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        return fast == 1;
    }
};