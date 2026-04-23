class Solution {
public:

    void bfs(queue<pair<int,int>>&q, vector<vector<int>>&vis, vector<vector<int>>& adj){
        int n = adj.size();
        int m = adj[0].size();

        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        while(!q.empty()){
            int u = q.front().first;
            int v = q.front().second;
            q.pop();
            vis[u][v] = 1;
            for(int k=0;k<4;k++){
                int x = dx[k] + u;
                int y = dy[k] + v;
                if(x>=0 && x<n && y>=0 && y<m && adj[x][y]>=adj[u][v] && !vis[x][y]){
                    q.push({x,y});
                    vis[x][y] = 1;
                }
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& adj) {

        vector<vector<int>>pacific(500,vector<int>(500,0));
        vector<vector<int>>atlantic(500,vector<int>(500,0));

        int n = adj.size();
        int m = adj[0].size();
        queue<pair<int,int>>pac,atl;
        for(int i=0;i<m;i++){
            pac.push({0,i});
            atl.push({n-1,i});
        }
        for(int i=0;i<n;i++){
            pac.push({i,0});
            atl.push({i,m-1});
        }

        bfs(pac,pacific,adj);
        bfs(atl,atlantic,adj);

        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    v.push_back({i,j});
                }
            }
        }
        return v;

    }
};
