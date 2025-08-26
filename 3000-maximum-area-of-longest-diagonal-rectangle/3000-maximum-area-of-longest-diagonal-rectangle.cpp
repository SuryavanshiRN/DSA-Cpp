class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        float currDim = 0;
        int maxArea = 0;
        for(int i=0; i<n; i++){
            float dim = sqrt(pow(dimensions[i][0],2) + pow(dimensions[i][1],2));
            if(dim >= currDim){
                if(dim == currDim){
                    maxArea = max(maxArea,dimensions[i][0] * dimensions[i][1]);
                }else{
                    maxArea = dimensions[i][0] * dimensions[i][1];
                    currDim = dim;
                }
            }
        }

        return maxArea;
    }
};