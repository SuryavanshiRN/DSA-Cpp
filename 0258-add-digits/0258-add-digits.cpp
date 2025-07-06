class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        if(num<10) return num;
        while(num>0){
            ans=ans+num%10;
            num /=10;
        }
        return addDigits(ans);
    }
    
};