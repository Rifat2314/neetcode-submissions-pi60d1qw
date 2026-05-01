class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        int start_indx = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(s[i]==s[j] && ((i-j)<=2 || dp[i-1][j+1])){
                    dp[i][j] = 1;
                    if(i-j+1>=(count)){
                        count = i-j+1;
                        start_indx = j;
                    }
                }
            }
        }
        return s.substr(start_indx,count);
    }
};
