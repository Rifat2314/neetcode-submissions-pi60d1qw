class Solution {
public:
    int vis[200][200];

    void bfs(vector<vector<char>>& grid,int i,int j){
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            auto [u,v] = q.front();
            q.pop();
            vis[u][v] = 1;
            for(int i=0;i<4;i++){
                int x = u + dx[i];
                int y = v + dy[i];
                if(x<grid.size() && y<grid[i].size() && !vis[x][y] && grid[x][y]=='1'){
                    q.push({x,y});
                    vis[x][y] = 1;
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                vis[i][j] = 0;
            }
        }
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    bfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
