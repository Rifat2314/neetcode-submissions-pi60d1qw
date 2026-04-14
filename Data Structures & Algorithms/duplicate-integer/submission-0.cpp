class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto u:nums){
            st.insert(u);
        }
        if(st.size()==nums.size())return false;
        else return true;
    }
};