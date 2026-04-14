class Solution {
public:
    int maxProfit(vector<int>& price) {
        int i=0,j=1;
        int ans = 0;
        while(j<price.size()){
            if(price[i]<price[j]){
                ans = max(ans,price[j]-price[i]);
            }
            else{
                i=j;
            }
            j++;
        }
        return ans;
    }
};
