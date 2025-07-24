class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int st = -1;
        int end = -1;
        int l = 0;
        int u = n-1;
        while(l<=u){
            int mid = l + (u-l)/2;
            if(nums[mid]==target){
                st = mid;
                u = mid - 1;
            }
            else if(nums[mid]>target){
                u = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        l = 0;
        u = n-1;
        while(l<=u){
            int mid = l + (u-l)/2;
            if(nums[mid]==target){
                end = mid;
                l = mid + 1;
            }
            else if(nums[mid]>target){
                u = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        return {st,end};
    }
};