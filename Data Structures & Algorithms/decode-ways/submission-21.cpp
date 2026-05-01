class Solution {
public:
    int dp[150];
    int solve(int i,string& s){
        if(i==s.size())return 1;
        if(s[i]=='0')return 0;
        if(dp[i]!=-1)return dp[i];
       int res = 0;
        res = solve(i+1,s);
        if(i<(s.size()-1)){
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7')){
                res += solve(i+2,s);
            }
        }
        return dp[i] = res;
    }

    int numDecodings(string s) {
        for(int i=0;i<s.size();i++){
            dp[i] = -1;
        }
        return solve(0,s);
    }
};
