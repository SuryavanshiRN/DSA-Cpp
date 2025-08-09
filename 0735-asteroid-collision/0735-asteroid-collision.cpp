class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        int n = asteroids.size();

        for(int a: asteroids){
            while(!st.empty() && a<0 && st.top()>0){
                int sum = a + st.top();
                if(sum<0) st.pop();
                else if(sum>0) a = 0;
                else{
                    a = 0;
                    st.pop();
                }
            }

            if(a != 0){
                st.push(a);
            }
        }
        int s = st.size();
        vector<int> ans(s);
        while(!st.empty()){
            ans[s-1] = st.top();
            st.pop();
            s--;
        }

        return ans;
    }

};