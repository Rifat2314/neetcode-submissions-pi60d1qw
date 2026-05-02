class Solution {
public:
    bool dp[10001];
    bool solve(vector<int>&nums,int indx){
        if(indx>=(nums.size()-1)){
            return true;
        }
        if(dp[indx]!=false){
            return dp[indx];
        }
        int len = min((int)nums.size()-1,indx+nums[indx]);
        for(int i=indx+1;i<=len;i++){
            if(solve(nums,i)){
                return dp[indx] = true;
            }
        }

        return dp[indx] = false;
    }

    bool canJump(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
            dp[i] = false;
        }
        return solve(nums,0);
    }
};
