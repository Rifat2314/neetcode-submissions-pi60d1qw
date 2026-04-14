class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int mid;
        while(r-l>1){
            mid = (l+r)/2;
            if(nums[mid]>=target){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        if(nums[l]==target){
            return l;
        }
        else if(nums[r]==target){
            return r;
        }
        else{
            return -1;
        }
    }
};
