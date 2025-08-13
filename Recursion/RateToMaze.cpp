#include<iostream>
#include <vector>
using namespace std;
void solve(vector<vector<int>> &maze, int i,int j,int n, int di[],int dj[], string move, vector<string> &ans, vector<vector<int>> &vis){
    if(i==n-1&&j==n-1){
        ans.push_back(move);
        return;
    }
    string dir="DLRU";
    for(int ind=0;ind<4;ind++){
        int nexti=i+di[ind];
        int nextj=j+dj[ind];
        if(nexti>=0 &&nextj>=0&& nexti<n&&nextj<n && !vis[nexti][nextj] && maze[nexti][nextj]==1){
            vis[i][j]=1;
            solve(maze, nexti, nextj, n,di,dj,move+dir[ind], ans, vis);
            vis[i][j]=0;
        }
    }
}



vector<string> path(vector<vector<int>> maze, int n){
    vector<string> ans;
    vector<vector<int>> vis (n, vector<int>(n, 0));
    int di[]={1,0,0,-1};
    int dj[]={0,-1,1,0};
    if (maze[0][0]==1) solve(maze,0,0,n, di, dj,"",ans,vis);
    return ans;
}

int main(){

    vector<vector<int>> maze = {
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 1},
        {0, 0, 0, 1}
    };
    int n = maze.size();

    vector<string> result= path(maze, n);
     if (result.empty()) {
        cout << "No path found";
    } else {
        for (auto it : result) {
            cout << it << " ";
        }
    }

    return 0;
}
