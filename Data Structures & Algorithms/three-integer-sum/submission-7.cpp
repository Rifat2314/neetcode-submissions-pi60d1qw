class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(auto u:nums){
            mp[u]++;
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int k = 0 - nums[i]-nums[j];
                if(mp[k]>2 || mp[k]==2 && k!=nums[i] && k!=nums[j] || mp[k]==1 && k!=nums[i] && k!=nums[j] ){
                    vector<int>tmp = {nums[i],nums[j],0-nums[i]-nums[j]};
                    sort(tmp.begin(),tmp.end());
                    st.insert({tmp});
                }
            }
        }
        for(auto u:st){
            ans.push_back(u);
        }

        return ans;
    }
};
