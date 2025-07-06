class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int,int> om;
         stack<int> st;
         vector<int> ans;

         for(int i: nums2){
            while(!st.empty() && st.top()<i){
                om[st.top()]=i;
                st.pop();
            }
            st.push(i);
         }

         while(!st.empty()){
            om[st.top()]=-1;
            st.pop();
         }

         for(int j: nums1){
            ans.push_back(om[j]);
         }

         return ans;
    }
};