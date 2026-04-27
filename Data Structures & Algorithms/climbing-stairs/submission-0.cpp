class Solution {
public:
    int dp[50];

    int solve(int n){
        if(n==0)return 1;
        if(n<0)return 0;

        if(dp[n]!=-1)return dp[n];
        dp[n] = solve(n-1)+solve(n-2);
        return dp[n];
    }

    int climbStairs(int n) {
        for(int i=0;i<49;i++){
            dp[i]=-1;
        }
        return solve(n);
    }
};
