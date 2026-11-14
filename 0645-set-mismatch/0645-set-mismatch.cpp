class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]); 
                break;
            }
        }

        int dupl = 0 ;

        for(int i=1; i<=nums.size(); i++){
            dupl ^= nums[i-1] ^ i;
        }

        ans.push_back(dupl ^ ans[0]);
        return ans;
    }
};