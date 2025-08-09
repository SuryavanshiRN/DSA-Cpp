class Solution {
public:
    vector<int> getnsl(vector<int>& arr, int n){
        vector<int> result(n);
        stack<int> st;

        for(int i = 0; i<n; i++){
            if(st.empty()) result[i]=-1;
            else{
                while(!st.empty() && arr[st.top()]>arr[i]){
                    st.pop();
                }
                if(st.empty()) result[i] = -1;
                else{
                    result[i] = st.top();
                }
            }

            st.push(i);

        }

        return result;
    }
    vector<int> getnsr(vector<int>& arr, int n){
        vector<int> result(n);
        stack<int> st;

        for(int i = n-1; i>=0; i--){
            if(st.empty()) result[i]=n;
            else{
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    st.pop();
                }
                if(st.empty()) result[i] = n;
                else{
                    result[i] = st.top();
                }
            }
            st.push(i);
        }

        return result;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;
        long long totalSum = 0;
        vector<int> nsl = getnsl(arr,n);
        vector<int> nsr = getnsr(arr,n);
        for(int i = 0; i<n; i++){
            long long l = i - nsl[i];
            long long r = nsr[i] - i;
            long long  total = (l*r*arr[i])%mod;
            totalSum = (totalSum + total)%mod; 
        }
        return totalSum;
    }
};