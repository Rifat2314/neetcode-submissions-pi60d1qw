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

        if(nums.size()==1)return nums[0];

        for(int i=0;i<nums.size();i++){
            dp[i]=-1;
        }
        vector<int>v1 = nums;
        vector<int>v2 = nums;
        v1.pop_back();
        reverse(v2.begin(),v2.end());
        v2.pop_back();

        int k1 =  solve(0,v1);
        for(int i=0;i<nums.size();i++){
            dp[i]=-1;
        }
        int k2 = solve(0,v2);

        return max(k1,k2);
    }
};
