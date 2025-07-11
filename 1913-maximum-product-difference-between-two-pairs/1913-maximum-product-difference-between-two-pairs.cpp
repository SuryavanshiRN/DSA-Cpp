class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        int l1=0,l2=0;
        int s1=INT_MAX,s2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>l1){
                l2=l1;
                l1=nums[i];
            }
            else{
                l2=max(l2,nums[i]);
            }
            if(nums[i]<s1){
                s2=s1;
                s1=nums[i];
            }
            
            else{
                s2=min(s2,nums[i]);
            }
        }
        return ((l1*l2)-(s1*s2));
    }
};