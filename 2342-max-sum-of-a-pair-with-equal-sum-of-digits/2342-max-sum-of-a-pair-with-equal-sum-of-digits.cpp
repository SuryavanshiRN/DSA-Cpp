class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int arr[100]={0};
        int ans=-1;
        for(i=0;i<n;i++){
            int digitsum = digitSum(nums[i]);
            if(arr[digitsum]!=0){
                ans=max(ans,arr[digitsum]+nums[i]);
            }
            arr[digitsum]=max(arr[digitsum],nums[i]);
        }
        return ans;

    }
private:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }    
};