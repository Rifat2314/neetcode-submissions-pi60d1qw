class Solution {
public:
    int findMin(vector<int> &nums) {
        int lo=0,hi=nums.size()-1;
        if(nums[lo]<nums[hi]){
            return nums[0];
        }
        int mid;
        while(hi-lo>1){
            mid = (lo+hi)/2;
            if(nums[lo]<=nums[mid]){
                lo=mid;
            }
            else if(nums[mid]<=nums[hi]){
                hi=mid;
            }
            
        }
        return min(nums[lo],nums[hi]);
    }
};
