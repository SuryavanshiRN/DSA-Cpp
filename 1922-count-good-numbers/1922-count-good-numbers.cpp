class Solution {
public:
    long long mod = 1e9 +7;
    int binPow(long long num, long long pow){
        
        if(pow==0) return 1;
        long long half = binPow(num,pow/2);
        long long res = (half * half)%mod;

        if(pow%2==1){
            res  = (res * num)%mod;
        }

        return res;
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;

        return (long long)binPow(5,even)*binPow(4,odd)%mod;
    }
};