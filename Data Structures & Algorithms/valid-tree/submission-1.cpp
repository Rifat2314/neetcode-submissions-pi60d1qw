class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto v:edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        queue<pair<int,int>>q;
        q.push({0,-1});
        vector<int>vis(n,0);
        while(!q.empty()){
            auto [node,parent] = q.front();
            vis[node] = 1;
            q.pop();
            for(auto u:adj[node]){
                if(u==parent)continue;
                if(vis[u]){
                    return false;
                }
                vis[u] = 1;
                q.push({u,node});
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i])return false;
        }
        return true;
    }
};
