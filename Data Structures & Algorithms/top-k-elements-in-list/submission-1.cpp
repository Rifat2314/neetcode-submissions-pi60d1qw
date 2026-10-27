class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto u:nums){
            freq[u]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto u:freq){
            bucket[u.second].push_back(u.first); // u.second = total count
        }
        vector<int>ans;
        for(int i=nums.size();i>=1;i--){
            for(auto v:bucket[i]){
                ans.push_back(v);

                if(ans.size()==k)return ans;
            }
        }
        return {};
    }
};
