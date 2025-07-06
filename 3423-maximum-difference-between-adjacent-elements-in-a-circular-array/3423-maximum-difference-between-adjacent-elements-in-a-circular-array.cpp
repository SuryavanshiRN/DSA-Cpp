class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxD=0;
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){
                maxD = max(maxD, abs(nums[i] - nums[0]));
            }
            else{
                maxD = max(maxD, abs(nums[i] - nums[i+1]));
            }
        }
        return maxD;
    }
};