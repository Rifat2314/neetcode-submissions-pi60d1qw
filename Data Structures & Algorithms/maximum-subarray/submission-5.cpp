class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
        int count = 0;
        int maximam = INT_MIN;
        for(int i=0;i<nums.size();i++){
            count += nums[i];
            maximam = max(maximam,count);
            if(count<0){
                count = 0;
            }
        }
        return maximam;
    }
};
