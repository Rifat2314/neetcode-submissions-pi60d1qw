class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int k = abs(nums[i])-1;
            cout<<nums[k]<<" ";
            if(nums[k]<0){
                return abs(nums[i]);
            }
            nums[k]*=-1;
        }
    }
};
