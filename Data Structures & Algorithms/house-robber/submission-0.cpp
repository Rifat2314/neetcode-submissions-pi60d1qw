class Solution {
public:
    int dp[101];

    int solve(int index,vector<int>&nums){
        if(index>=nums.size())return 0;
        if(dp[index]!=-1)return dp[index];

        dp[index] = max(nums[index]+solve(index+2,nums),solve(index+1,nums));
        return dp[index];
    }

    int rob(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            dp[i]=-1;
        }
        return solve(0,nums);
    }
};
