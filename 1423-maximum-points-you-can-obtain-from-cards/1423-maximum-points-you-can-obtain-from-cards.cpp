class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        int rsum = 0;
        int maxSum = 0;
        for(int i=0;i<k;i++){
            lsum += cardPoints[i];
        }

        maxSum = lsum;

        for(int j=k-1; j>=0;j--){
            lsum -= cardPoints[j];
            rsum += cardPoints[n-1];
            n--;
            maxSum = max(maxSum,lsum + rsum);
        }

        return maxSum;
    }
};