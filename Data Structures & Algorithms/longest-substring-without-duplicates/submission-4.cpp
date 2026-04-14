class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1){
            return 1;
        }
        if(s.size()==0){
            return 0;
        }
        int i=0,j=1;
        int ans = 0;
        set<int>st;
        st.insert(s[0]);
        while(j<s.size()){
            if(!st.count(s[j])){
                st.insert(s[j]);
                j++;
            }
            else{
                ans = max(ans,j-i);
                st.erase(s[i]);
                i++;
            }
            cout<<ans<<" ";
        }
        ans = max(ans,j-i);
        return ans;
    }
};
