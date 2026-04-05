class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        if(n==1 && gas[0]==cost[0]) return 0;
        for(int i=0; i<n; i++){
            if(gas[i]>cost[i]){
                int curr = gas[i]-cost[i];
                int j;
                for(j = i+1; j<n+i; j++){
                    if(cost[j%n]> curr + gas[j%n]) break;
                    curr = curr + gas[j%n] - cost[j%n];
                }
                if(j == n+i) return i;
            }
        }

        return -1;
    }
};