class Solution {
public:

    bool check(long long mid,vector<int>& piles,int h){
        long long hourCount = 0;
        for(int i=0;i<piles.size();i++){
            hourCount += (piles[i]+mid-1)/mid;
        }
        if(hourCount<=h){
            return true;
        }
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long lo=1,hi=1e9;
        long long mid;
        while(hi-lo>1){
            mid = lo+(hi-lo)/2;
            if(check(mid,piles,h)){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        if(check(lo,piles,h)){
            return lo;
        }
        return hi;
    }
};
