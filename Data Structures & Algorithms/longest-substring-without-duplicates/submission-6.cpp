class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){
            return s.size();
        }
        int i=0,j=1;
        int ans = 0;
        set<int>st;
        map<char,int>mp;
        mp[s[0]]=1;
        while(j<s.size()){
            if(mp[s[j]]==0){
                mp[s[j]]=1;
                j++;
            }
            else{
                ans = max(ans,j-i);
                mp[s[i]]--;
                i++;
            }
            cout<<ans<<" ";
        }
        ans = max(ans,j-i);
        return ans;
    }
};
