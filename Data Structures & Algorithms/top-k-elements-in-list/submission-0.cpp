class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto u:nums){
            mp[u]++;
        }
        vector<pair<int,int>>p;
        for(auto u:mp){
            p.push_back({u.second,u.first});
        }
        sort(p.rbegin(),p.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        for(auto u:ans){
            cout<<u<<" ";
        }cout<<endl;
        return ans;
    }
};
