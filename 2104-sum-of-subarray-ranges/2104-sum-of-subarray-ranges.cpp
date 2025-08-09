#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        
        // --- Sum of maximums ---
        vector<int> ngl(n), ngr(n);
        stack<int> st;
        // Nearest Greater to Left
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i]) st.pop();
            ngl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        // Nearest Greater to Right
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            ngr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        long long sumMax = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - ngl[i];
            long long right = ngr[i] - i;
            sumMax += (long long)nums[i] * left * right;
        }

        // --- Sum of minimums ---
        vector<int> nsl(n), nsr(n);
        while (!st.empty()) st.pop();
        // Nearest Smaller to Left
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) st.pop();
            nsl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        // Nearest Smaller to Right
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) st.pop();
            nsr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        long long sumMin = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - nsl[i];
            long long right = nsr[i] - i;
            sumMin += (long long)nums[i] * left * right;
        }

        return sumMax - sumMin;
    }
};
