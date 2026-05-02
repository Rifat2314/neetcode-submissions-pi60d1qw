class Solution {
public:
    bool solve(vector<int>&nums,int indx){
        if(indx>=(nums.size()-1)){
            return true;
        }
        int len = min((int)nums.size()-1,indx+nums[indx]);
        for(int i=indx+1;i<=len;i++){
            if(solve(nums,i)){
                return true;
            }
        }

        return false;
    }

    bool canJump(vector<int>& nums) {
        return solve(nums,0);
    }
};
