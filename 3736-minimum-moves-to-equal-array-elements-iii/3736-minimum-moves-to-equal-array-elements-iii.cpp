class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        int moves = 0;

        for(int i: nums) m = max(m, i);

        for(int i=0; i<n; i++){
            moves += m - nums[i];
        }

        return moves;
    }
};