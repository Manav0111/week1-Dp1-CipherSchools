#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double knightProbability(int n, int k, int r, int c) {
        int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
    vector<vector<int>> visited(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = 0;
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        int x = cur.first, y = cur.second;
        if (visited[x][y] == k) continue;
        for (int i = 0; i < 8; i++) {
            int a = x + dx[i], b = y + dy[i];
            if (a >= 0 && a < n && b >= 0 && b < n && visited[a][b] == -1) {
                visited[a][b] = visited[x][y] + 1;
                q.push({a, b});
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (visited[i][j] == k) ans++;
    return ans;
    }
};