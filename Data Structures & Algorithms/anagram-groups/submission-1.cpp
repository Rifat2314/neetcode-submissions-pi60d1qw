class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto u:strs){
            string key = u;
            sort(key.begin(),key.end());
            mp[key].push_back(u);
        }
        vector<vector<string>>ans;
        for(auto u:mp){
            ans.push_back(u.second);
        }
        return ans;
    }
};
