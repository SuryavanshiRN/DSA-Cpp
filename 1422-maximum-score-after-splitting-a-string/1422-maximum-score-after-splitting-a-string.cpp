class Solution {
public:
    int maxScore(string s) {
        int ones=0;
        int total=0;
        for(auto& c: s){
            if((c-'0')==1) ones++;
        }
        int zero=0;
        int one=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0')  zero++;
            if(s[i]=='1'){
                one++;
            } 
            total=max(total,zero + ones - one) ;
        }
        
        return total;
    }
};