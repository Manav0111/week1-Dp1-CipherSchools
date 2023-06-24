#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
    int n = board[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    vector<vector<int>> dirs{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    function<bool(int, int, int)> dfs = [&](int x, int y, int idx) {
        if (idx == word.size()) return true;
        if (x < 0 || x >= m || y < 0 || y >= n) return false;
        if (visited[x][y] || board[x][y] != word[idx]) return false;
        visited[x][y] = true;
        for (auto dir : dirs) {
            int a = x + dir[0];
            int b = y + dir[1];
            if (dfs(a, b, idx + 1)) return true;
        }
        visited[x][y] = false;
        return false;
    };
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (dfs(i, j, 0)) return true;
        }
    }
    return false;
    }
};