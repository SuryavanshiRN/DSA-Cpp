class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,count=0;
        int M=0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
            }
            M=max(count,M);
            if(nums[i]==0){
                count=0;
            }
            i++;
        }
        return M;
    }
};