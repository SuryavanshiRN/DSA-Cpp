class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int u = *max_element(nums.begin(),nums.end());
        while(l<u){
            int m = l + (u-l)/2;
            int hours = 0;
            bool flag = false;
            for(int p :  nums){
                int div = p/m;
                hours += div;
                if(p%m!=0) hours++;
            }
            if(hours<= threshold) flag = true;
            if(flag) u = m;
            else l = m + 1;
        }

        return l;
    }
};