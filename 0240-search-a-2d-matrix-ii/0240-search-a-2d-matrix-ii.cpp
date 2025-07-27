class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0) return false;
        int cols = matrix[0].size();
        if (cols == 0) return false;

        int l = 0, r = cols - 1;
        int targetCol = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (matrix[0][m] == target) return true;
            if (matrix[0][m] < target) {
                targetCol = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        
        if (targetCol == -1) return false;

        
        l = 0, r = rows - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (matrix[m][targetCol] == target) return true;
            if (matrix[m][targetCol] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return false;
    }
};
