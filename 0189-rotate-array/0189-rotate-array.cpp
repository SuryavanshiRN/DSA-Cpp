class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(k);
        int n=0;
        k=k%nums.size();
        for(int j=nums.size()-k; j<nums.size();j++,n++){
            temp[n]=nums[j];
        }
        for(int i=nums.size()-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        for(int c=0;c<k;c++){
            nums[c]=temp[c];
        }
    }
};