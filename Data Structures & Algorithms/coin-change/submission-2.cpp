class Solution {
public:
    int dp[100000];
    int solve(vector<int>& coins, int amount){
        if(amount==0){
            return 0;
        }
        if(dp[amount]!=-1)return dp[amount];
        int res=1e9;
        for(int i=0;i<coins.size();i++){
            if(amount-coins[i]>=0){
                res = min(res,1+solve(coins,amount-coins[i]));
            }
        }
        return dp[amount] = res;
    }

    int coinChange(vector<int>& coins, int amount) {
       for(int i=0;i<=10000;i++){
            dp[i]=-1;
       } 
       int ans = solve(coins,amount); 
       return (ans >= 1e9) ? -1 : ans;
    }
};
