class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        set<int>st;
        for(auto u:nums){
            st.insert(u);
        }
        vector<int>v;
        for(auto u:st){
            v.push_back(u);
        }
        int count = 1;
        int tmp = 1;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]==1){
                tmp++;
            }
            else{
                count = max(count,tmp);
                tmp = 1;
            }
        }
        count = max(count,tmp);
        return count;
    }
};
