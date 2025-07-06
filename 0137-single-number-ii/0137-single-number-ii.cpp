class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i: nums)  m[i]++;
        for(auto& it: m){
            if(it.second == 1)  return it.first;
        }
        return 0;
    }
};