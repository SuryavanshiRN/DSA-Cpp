class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        char m = ' ';

        for(int i=2;i<n;i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                m = max(m, num[i]);
            }
        }
        if(m ==' ')  return "";

        return string(3,m);
    }
};