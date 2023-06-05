#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m) {
  for (int left = 0, right = m - 1, top = 0, bottom = n - 1;
       left < right && top < bottom;) {
    int prev = mat[top][left];
    for (int i = left + 1; i <= right; i++) {
      swap(mat[top][i], prev);
    }
    top++;
    for (int i = top; i <= bottom; i++) {
      swap(mat[i][right], prev);
    }
    right--;
    for (int i = right; i >= left; i--) {
      swap(mat[bottom][i], prev);
    }
    bottom--;
    for (int i = bottom; i >= top - 1; i--) {
      swap(mat[i][left], prev);
    }
    left++;
  }
}
