class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(int j=0;j<n-1;j++){
            if(nums[j]==0){
                if(nums[j+1]!=0){
                    swap(nums[i],nums[j+1]);
                    i++;
                }
            }
            else i++;
        }
    }
};