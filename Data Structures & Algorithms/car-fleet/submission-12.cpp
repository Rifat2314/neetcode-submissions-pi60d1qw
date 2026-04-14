class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>p;
        int n = position.size();
        for(int i=0;i<n;i++){
            p.push_back({position[i],speed[i]});
        }
        sort(p.begin(),p.end());
        stack<double>st;
        for(int i=n-1;i>=0;i--){
            double tmp = (double)(target - p[i].first)/p[i].second;
            cout<<p[i].first<<" "<<p[i].second<<" "<<tmp<<endl;
            if(st.empty() || (tmp>st.top())){
                st.push(tmp);
            }
        }
        return st.size();
        
    }
};
