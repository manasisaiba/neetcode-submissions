class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        priority_queue<pair<int,int>>q;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            q.push({i.second,i.first});
        }
        while(k--){
            pair<int,int> x = q.top();
            q.pop();
            res.push_back(x.second);
        }
        return res;
    }
};
