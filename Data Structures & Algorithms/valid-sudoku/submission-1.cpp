class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0;i<9;i++){
            map<char,int>mp;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    mp[board[i][j]]++;
                }
            }
            for(auto u:mp){
                if(u.second>1){
                    cout<<"Case 1 e false hoise"<<endl;
                    return false;
                }
            }
        }
        for(int i=0;i<9;i++){
            map<char,int>mp;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    mp[board[j][i]]++;
                }
            }
            for(auto u:mp){
                if(u.second>1){
                    cout<<"Case 2 e false hoise"<<endl;
                    return false;
                }
            }
        }

        bool flag = true;
        int i,j;
        for(i=0,j=0;i<9 && j<9;){
            map<char,int>mp;
            for(int k=i;k<(i+3);k++){
                for(int l=j;l<(j+3);l++){
                    mp[board[k][l]]++;
                }
            }
            for(auto u:mp){
                if(u.second>1 && u.first!='.'){
                    flag = false;
                }
            }
            if(j+3<9){
                j+=3;
            }
            else if(i+3<9){
                i+=3;
                j=0;
            }
            else{
                break;
            }
        }
        return flag;
    }
};
