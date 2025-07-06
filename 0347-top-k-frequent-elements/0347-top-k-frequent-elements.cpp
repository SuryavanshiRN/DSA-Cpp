class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n:nums)  freq[n]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<>> p;
        for(auto& [n,count] : freq){
            p.push({count, n});
            if(p.size()>k)  p.pop();
        }
        vector<int> result;
        while(!p.empty()){
            result.push_back(p.top().second);
            p.pop();
        }
        return result;
    }
};