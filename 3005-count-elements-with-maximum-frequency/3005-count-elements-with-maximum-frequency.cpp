class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int maxfreq = 0;
        for(int i:nums){
            mp[i]++;
            maxfreq = max(maxfreq,mp[i]);
        }
        int total=0;
        for(auto& it: mp){
            if(it.second ==maxfreq){
                total += it.second;
            }
        }

        return total;
    }
};