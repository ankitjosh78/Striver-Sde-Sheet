#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix) {
  // Write your code here.
  int n = (int)matrix.size();
  int m = (int)matrix[0].size();

  bool row0 = false, col0 = false;
  for (int i = 0; i < m; i++) {
    if (!matrix[0][i]) {
      col0 = true;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (!matrix[i][0]) {
      row0 = true;
      break;
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (!matrix[i][j]) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (!matrix[i][0] || !matrix[0][j]) {
        matrix[i][j] = 0;
      }
    }
  }

  if (row0) {
    for (int i = 0; i < n; i++)
      matrix[i][0] = 0;
  }

  if (col0) {
    for (int i = 0; i < m; i++) {
      matrix[0][i] = 0;
    }
  }
}
