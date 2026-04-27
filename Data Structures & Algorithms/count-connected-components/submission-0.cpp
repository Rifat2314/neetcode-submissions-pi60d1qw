class Solution {
public:

    void bfs(int node, vector<int>&vis ,int n, vector<int> adj[]){
        queue<int>q;
        q.push(node);
        while(!q.empty()){
            int k = q.front();
            q.pop();
            vis[k] = 1;
            for(auto u:adj[k]){
                if(!vis[u]){
                    q.push(u);
                    vis[u]=1;
                }
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto u:edges){
            adj[u[0]].push_back(u[1]);
            adj[u[1]].push_back(u[0]);
        }
        vector<int>vis(n,0);
        int count = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i,vis,n,adj);
                count++;
            }
        }
        return count;
    }
};
