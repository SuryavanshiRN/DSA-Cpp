class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> m(paths.size());
        for(auto& c: paths) m[c[0]]++;
        for(auto& c: paths){
            if(m.count(c[1])){

            }else return c[1];
        }
        return "";
    }
};