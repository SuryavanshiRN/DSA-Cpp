class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int u = *max_element(piles.begin(),piles.end());
        while(l<u){
            int m = l + (u-l)/2;
            int hours = 0;
            bool flag = false;
            for(int p :  piles){
                int div = p/m;
                hours += div;
                if(p%m != 0) hours++;
            }
            if(hours<= h) flag = true;
            if(flag) u = m;
            else l = m + 1;
        }

        return l;
    }
};