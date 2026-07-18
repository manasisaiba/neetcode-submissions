class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
            }
            mp[nums[i]]=i;
        }
        /*
        6,4,5,3 target ----- 7
    mp = 1,0
         4,1
         5,2
         
        */
        return v;
    }
};
