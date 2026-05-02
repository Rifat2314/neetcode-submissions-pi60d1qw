class Solution {
public:
    bool canJump(vector<int>& nums) {
        int right = nums.size()-1,left=0;
        bool flag = true;
        for(int i=nums.size()-2;i>=0;i--){
            flag = false;
            if(right-i<=nums[i]){
                right = i;
                flag = true;
            }
        }
        return flag;
    }
};
