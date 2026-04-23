class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int n = grid.size();
        int m = grid[0].size();
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        
        while(!q.empty()){
            int u = q.front().first;
            int v = q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int x = u+dx[k];
                int y = v+dy[k];

                if(x<0 || x>=n || y<0 || y>=m || grid[x][y]!=1){
                    continue;
                }
                grid[x][y] = grid[u][v] + 1;
                q.push({x,y});
            }
        }
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    return -1;
                }
                count = max(count,grid[i][j]);
            }
        }

        return max(count-2,0);

    }
};
