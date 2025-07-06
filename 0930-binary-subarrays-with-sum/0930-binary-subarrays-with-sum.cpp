class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        vector<int> count(n+1,0);
        count[0]=1;
        int res=0;
        int cnt=0;
        for(int num: nums){
            cnt += num;
            if((cnt - goal) >= 0){
                res += count[cnt - goal];
            }
            count[cnt]++;
        }

        return res;

    }
};