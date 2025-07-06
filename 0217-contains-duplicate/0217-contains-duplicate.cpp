class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        unordered_map<int, int> hashMap; 
        for (int num : nums) {
            if (hashMap[num] > 0) return true;  
            hashMap[num] = 1;  
        }
        return false; 
    }
};
