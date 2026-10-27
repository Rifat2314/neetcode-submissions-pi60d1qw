class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n+2,1);
        vector<int>right(n+2,1);
        vector<int>v(n+2);
        for(int i=1;i<=n;i++){
            v[i] = nums[i-1];
        }
        for(int i=1;i<=n;i++){
            left[i] = left[i-1]*v[i]; 
        }
        for(int i=n;i>=1;i--){
            right[i] = right[i+1]*v[i];
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(right[i+1]*left[i-1]);
        }
        return ans;
    }
};
