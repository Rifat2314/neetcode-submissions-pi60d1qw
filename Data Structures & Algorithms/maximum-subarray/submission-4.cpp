class Solution {
public:
    int dp[1001][2];

    int solve(int index,vector<int>& nums,bool flag){
        if(index==nums.size()){
            if(flag)return 0;
            else return -1e8;
        }

        if(dp[index][flag]!=-1){
            return dp[index][flag];
        }

        if(flag){
            dp[index][flag] = max(0,nums[index]+solve(index+1,nums,true));
        }
        else{
            dp[index][flag] = max(nums[index]+solve(index+1,nums,true),solve(index+1,nums,false));
        } 
        return dp[index][flag];
    }

    int maxSubArray(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<=1;j++){
                dp[i][j] = -1;
            }
        }
        return solve(0,nums,false);
    }
};
