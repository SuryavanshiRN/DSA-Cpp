class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int count = 1;
        int m;
        for(int i =1; i<nums.size() && count<3;i++){
            if(nums[i] != nums[i-1]){
                count++;
                m = nums[i];
            }
        }

        if(count == 3) return m;
        else return nums[0];
    }
};