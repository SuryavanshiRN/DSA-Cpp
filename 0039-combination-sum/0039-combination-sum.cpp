class Solution {
public:
    
    void getAns(int ind, int tar, vector<int>& candidates,vector<int>& ds, vector<vector<int>>& ans){
        int n = candidates.size();
        if(ind == n){
            if(tar == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind] <= tar ){
            ds.push_back(candidates[ind]);
            getAns(ind, tar - candidates[ind], candidates, ds, ans);
            ds.pop_back();
        }
        getAns(ind + 1, tar , candidates, ds, ans);

        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
         vector<int> ds;
         getAns(0, target, candidates, ds, ans);
         return ans;
    }
};