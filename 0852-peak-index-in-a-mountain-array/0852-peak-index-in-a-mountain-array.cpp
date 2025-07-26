class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 0;
        int u = n - 1;
        while(l<=u){
            int m = l + (u - l)/2;
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return m;
            else if(arr[m]>arr[m-1] && arr[m]<arr[m+1]) l = m + 1;
            else u = m - 1;
        } 

        return -1;
    }
};