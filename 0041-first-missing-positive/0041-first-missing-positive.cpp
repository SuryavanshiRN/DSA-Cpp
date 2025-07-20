class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains1 = false;
        for(int &num : nums){
            if(num==1) contains1 = true;
            if(num<=0 || num>n) num = 1;
        }
        if(contains1 == false) return 1;
        for(int i=0;i<n;i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx]>0) nums[idx] *= -1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1 ;
        }

        return n+1;

    }
};