class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l = grid[0].size();
        int b = grid.size();

        int rlmax = 0;
        int rbmax = 0;

        int rlmin = INT_MAX;
        int rbmin = INT_MAX;

        for(int i=0;i<b;i++){
            for(int j=0;j<l;j++){
                if(grid[i][j]==1){
                    
                    rlmax = max(rlmax,j);
                    rbmax = max(rbmax,i);

                    rlmin = min(rlmin,j);
                    rbmin = min(rbmin, i);
                }
            }
        }

        return (rlmax - rlmin + 1)*(rbmax - rbmin + 1);
    }
};