class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0;
        int u=n-1;
        while(l<=u){
            int mid = l + (u-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[l]<=nums[mid]){
                if(nums[mid]>target && nums[l]<=target) u = mid -1;
                else l = mid + 1;
                
            }
            else{
                if(nums[mid]<target && nums[u]>=target) l = mid + 1;
                else u = mid - 1;    
            }
        }
        

        return -1;
    }
};