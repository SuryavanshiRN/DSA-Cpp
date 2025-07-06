class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int start=nums[i];
            int difference=target-start;
            if(mp.count(difference)){
                return {mp[difference],i};
            }
            else{
                mp.insert({nums[i],i});
            }
        }
        return {};

    }
};