class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() == 1) {
            vector<int> singleList;
            singleList.push_back(nums[0]);
            res.push_back(singleList);
            return res;
        }

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            vector<int> remainingNums;
            for (int j = 0; j < nums.size(); j++) {
                if (j != i) {
                    remainingNums.push_back(nums[j]);
                }
            }
            
            vector<vector<int>> perms = permuteUnique(remainingNums);
            for (vector<int> p : perms) {
                p.insert(p.begin(), n);  // Insert n at the beginning of the permutation
                res.push_back(p);  // Append the modified permutation to the result
            }
        }
        
        set<vector<int>> uniqueSet(res.begin(), res.end());
        return vector<vector<int>>(uniqueSet.begin(), uniqueSet.end());   
    }
};

