class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int del=0;
        int n=nums.size();
        int i;
        for(i=0;i<n-1;i++){
            int shift = i -del;
            if(nums[i]==nums[i+1] && shift%2==0)  del++;
        }
        if((n-del)%2!=0) del++;

        return del;
    }
};