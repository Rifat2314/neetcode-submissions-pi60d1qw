class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int dp[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                dp[i][j] = 0;

        
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(s[i]==s[j] && ((i-j)<=2 || dp[i-1][j+1])){
                    dp[i][j] = 1;
                    res++;
                }
            }
        }
        return res;
    }
};
