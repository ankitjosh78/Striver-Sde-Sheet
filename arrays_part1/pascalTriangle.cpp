#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) {
  vector<vector<long long int>> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i].resize(i + 1);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        ans[i][j] = 1;
      } else {
        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
      }
    }
  }
  return ans;
}
