class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<int>st;
        vector<int>ans(a.size(),0);
        for(int i=0;i<a.size();i++){
            while(!st.empty() && a[i]>a[st.top()]){
                int indices = st.top();
                st.pop();
                ans[indices] = i-indices;
            }
            st.push(i);
        }
        return ans;
    }
};
