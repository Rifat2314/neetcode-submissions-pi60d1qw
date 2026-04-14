class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<int>st;
        vector<int>ans(a.size(),0);
        for(int i=0;i<a.size();i++){
            while(!st.empty() && a[i]>a[st.top()]){
                ans[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }
        for(auto u:ans){
            cout<<u<<" ";
        }
        return ans;
    }
};
