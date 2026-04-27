class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int>indeg(n+1,0);
        vector<int>adj[n];
        for(auto v:prerequisites){
            adj[v[0]].push_back(v[1]);
            indeg[v[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        unordered_map<int,int>mp;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            mp[node]=1;
            for(auto u:adj[node]){
                indeg[u]--;
                if(indeg[u]==0){
                    q.push(u);
                }
            }
        }

        for(int i=0;i<n;i++){
            if(mp[i]!=1) return false;
        }
        return true;
    }
};
