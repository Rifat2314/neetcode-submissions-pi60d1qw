class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n = price.size();
        vector<int>lowest(n);
        lowest[0] = price[0];
        for(int i=1;i<n;i++){
            lowest[i] = min(lowest[i-1],price[i]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,price[i]-lowest[i]);
        }
        return ans;
    }
};
