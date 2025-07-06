class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

        int ans1=0,ans2=0;

        for(int i: nums2){
            if(s1.count(i)){
                ans2++;
            }
        }
        for(int i: nums1){
            if(s2.count(i))  ans1++;
        }

        return {ans1,ans2};
    }
};