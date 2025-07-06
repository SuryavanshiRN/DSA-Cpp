class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1=NULL,maj2=NULL;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1){
                c1++;
            }else if(nums[i]==maj2){
                c2++;
            }else if(c1==0){
                maj1=nums[i];
                c1++;
            }else if(c2==0){
                maj2=nums[i];
                c2++;
            }else{
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        int C1=0, C2=0;
        for(int i: nums){
            if(i==maj1){
                C1++;
            }else if(i==maj2){
                C2++;
            }
        }
        if(C1>floor(nums.size()/3)) ans.push_back(maj1);
        if(C2>floor(nums.size()/3)) ans.push_back(maj2);
        
        return ans;
        
    }
};