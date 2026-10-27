class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){
            return s.size();
        }
        int i=0,j=0;
        int ans = 0;
        map<char,int>mp;
        while(j<s.size()){
            if(mp[s[j]]>=1){
                mp[s[i]]--;
                i++;
            }
            else{
                mp[s[j]]++;
                j++;
            }
            ans = max(ans,j-i);
        }
        return ans;
    }
};
