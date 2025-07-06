class Solution {
public:
    int maxDepth(string s) {
        int M = 0;
        int counter=0;
        for (char c : s) {
            if (c == '(') {
                counter++;
                M = max(M, counter);
            } else if (c == ')') {
                counter--;
            }
        }
        return M;

    }
};