#include <bits/stdc++.h>

using namespace std;

#define POSSIBLE_MOVES 4

int xMoves[] = {1, 0, -1, 0};
int yMoves[] = {0, 1, 0, -1};

bool isSafe(vector<vector<int>> &mat, vector<vector<bool>> &visited, int i, int j, int R, int C){
    return (i >= 0 && i < R && j >= 0 && j < C && mat[i][j] == 1 && !visited[i][j]);
}

bool raiInMaze(vector<vector<int>> &mat, vector<vector<bool>> &visited, int i, int j, int R, int C){
    //base condition
    if (i == R-1 && j == C-1 && mat[i][j] == 1){
        visited[i][j] = true;
        return true;
    }
    
    if(isSafe(mat, visited, i, j, R, C))
    {
        visited[i][j] = true;
        for(int k = 0; k < 4; k++){
            int nextX = i + xMoves[k];
            int nextY = j + yMoves[k];
            int x = i + xMoves[k];
            int y = j + yMoves[k];
            if (raiInMaze(mat, visited, x, y, R, C)){
                visited[i][j] = true;
                return true;
            }
            // backtrack
            visited[i][j] = false;
        }
    }
    

}


bool ratInMaze(vector<vector<int>> &mat)
{
        //recursion
    int R = mat.size();
    if (R == 0)
     return true;
    int C = mat[0].size();
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    return raiInMaze(mat, visited, 0, 0, R, C);
}