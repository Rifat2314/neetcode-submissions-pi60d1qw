class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>left(n+2,0);
        vector<int>right(n+2,0);
        vector<int>v(n+2,0);
        for(int i=1;i<=n;i++){
            v[i] = height[i-1];
        }
        for(auto u:v){
            cout<<u<<" ";
        }cout<<endl;
        for(int i=1;i<=n;i++){
            left[i] = max(left[i-1],v[i]);
        }
        for(auto u:left){
            cout<<u<<" ";
        }cout<<endl;
        for(int j=n;j>=1;j--){
            right[j] = max(right[j+1],v[j]);
        }
        for(auto u:right){
            cout<<u<<" ";
        }cout<<endl;
        int ans = 0;
        for(int i=1;i<=n-1;i++){
            ans = ans + max(0,min(left[i-1],right[i+1]) - v[i]);
            cout<<ans<<" "<<" i->"<<i<<endl;
        }
        return ans;
    }
};
