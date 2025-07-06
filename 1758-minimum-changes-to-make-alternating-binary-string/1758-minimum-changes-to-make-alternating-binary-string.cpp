class Solution {
public:
    int minOperations(string s) {
        int n=s.size();

        int zero = 0; //010101
        int one = 0;  //101010

        for(int i=0;i<n;i++){
            if(i%2==0){ //even
                if(s[i]=='1'){
                    zero++;
                }
            }
            else{ //odd
                if(s[i]=='0'){
                    zero++;
                }
            }
        }
        return min(n-zero,zero);
    }
};