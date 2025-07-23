class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans = "";
        for(char c:s) mp[c]++;

        priority_queue<pair<int,char>> pq;

        for(auto& [ch,freq]: mp ){
            pq.push({freq,ch});
        }

        while(!pq.empty()){
            pair<int,char> p = pq.top();
            pq.pop();
            ans.append(p.first,p.second); 
        }
        return ans;
    }
};