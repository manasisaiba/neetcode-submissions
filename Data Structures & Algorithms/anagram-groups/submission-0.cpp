class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n = str.size();
        vector<vector<string>>res;
        unordered_map<string,vector<string>> mp;
        for(int i = 0;i<n;i++){
         string s = str[i];
         sort(s.begin(), s.end());
         mp[s].push_back(str[i]);
        }
        for(auto i:mp){
         res.push_back(i.second);
        }
        return res;
    }
};
