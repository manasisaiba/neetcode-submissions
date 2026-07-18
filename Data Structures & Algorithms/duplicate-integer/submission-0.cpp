class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        return s.size()!=n;
    }
};