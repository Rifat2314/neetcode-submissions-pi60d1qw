class Solution {
public:
    int bst(vector<int>& nums,int target,int lo,int hi){
        if(lo==-1 && hi==-1){
            lo = 0;
            hi = nums.size()-1;
        }
        while(hi-lo>1){
            int mid = (lo+hi)/2;
            if(nums[mid]<=target){
                lo=mid;
            }
            else{
                hi=mid-1;
            }
        }
        if(nums[hi]==target)return hi;
        else if(nums[lo]==target)return lo;
        else return -1;
    }

    int search(vector<int>& nums, int target) { 
        int lo=0,hi=nums.size()-1;
        int mid;
        bool flag = false;
        while(hi-lo>1){
            mid = (lo+hi)/2;
            if(nums[lo]<=nums[mid] && nums[mid]<=nums[hi]){
                flag = true;
            }
            if(nums[lo]<=nums[mid]){
                lo=mid;
            }
            else if(nums[mid]<=nums[hi]){
                hi=mid;
            }
            
        }
        if(flag){
            int k = bst(nums,target,-1,-1);
            if(k!=-1){
                return k;
            }
        }
        else{
            int x1,y1,x2,y2;
            if(nums[lo]<=nums[hi]){
                x1=0;
                y1=lo-1;
                x2=lo;
                y2=nums.size()-1;
            }
            else{
                x1=0;
                y1=hi-1;
                x2=hi;
                y2=nums.size()-1;
            }
            int k1 = bst(nums,target,x1,y1);
            int k2 = bst(nums,target,x2,y2);
            if(k1!=-1){
                return k1;
            }
            if(k2!=-1){
                return k2;
            }
        }
        return -1;
    }
};
