class Solution {
public:
    int dp[1000002];

    int solve(int index,vector<int>& nums,bool flag){
        if(index==nums.size()){
            if(flag)return 0;
            else return -1e8;
        }
        int res = 0;
        if(flag){

            return res = max(0,nums[index]+solve(index+1,nums,true));
        }
        return res = max(nums[index]+solve(index+1,nums,true),solve(index+1,nums,false));
        
    }

    int maxSubArray(vector<int>& nums) {
        return solve(0,nums,false);
    }
};
