class Solution {
public:
    string makeFancyString(string s) {
        string res ="";
        res.push_back(s[0]);
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==res.back()){
                count++;
                if(count<3){
                    res.push_back(s[i]);
                }
            }
            else{
                res.push_back(s[i]);
                count=1;
            }       
        } return res;

    }
};