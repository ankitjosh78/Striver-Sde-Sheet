#include <bits/stdc++.h>
bool inside(int x, int y, int m, int n) {
  return x >= 0 && x < m && y >= 0 && y < n;
}
int dp[20][20];
int paths(int i, int j, int m, int n) {
  if (!inside(i, j, m, n)) {
    return 0;
  }
  if (i == m - 1 && j == n - 1) {
    return 1;
  }
  if (dp[i][j] != -1) {
    return dp[i][j];
  }
  int ans1 = paths(i + 1, j, m, n);
  int ans2 = paths(i, j + 1, m, n);
  return dp[i][j] = ans1 + ans2;
}
int uniquePaths(int m, int n) {
  // Write your code here.
  memset(dp, -1, sizeof dp);
  int ans = paths(0, 0, m, n);
  return ans;
}
