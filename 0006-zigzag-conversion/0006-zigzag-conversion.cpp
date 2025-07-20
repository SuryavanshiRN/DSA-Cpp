class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows <=1 || numRows>n) return s;
        vector<string> ans(numRows,"");
        bool dir = false;
        int currRow = 0;
        for(char c : s){
            ans[currRow] +=c;
            if(currRow == 0 || currRow == numRows-1) dir = !dir;
            currRow += dir? 1: -1;
        }
        string res = "";
        for(string str: ans){
            res += str;
        }

        return res;

    }
};