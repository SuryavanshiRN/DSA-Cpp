class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i: nums){
            mp[i]++;
        }
        int sum = nums[0];
        int i;
        
        for(i=0; i<n-1; i++){
            
            if(nums[i+1]!=nums[i]+1){
                break;
            }
            sum += nums[i+1];


        }
        int j = sum;
        while(j>=sum){
            if(mp[j]==0) return j;
            j++;
        }

        return 0;
    }
};