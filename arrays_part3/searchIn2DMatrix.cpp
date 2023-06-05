bool searchMatrix(vector<vector<int>> &mat, int target) {
  int n = (int)mat.size();
  int m = (int)mat[0].size();
  int targetRow = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int midRow = left + (right - left) / 2;
    if (mat[midRow][0] <= target && target <= mat[midRow][m - 1]) {
      targetRow = midRow;
      break;
    } else if (mat[midRow][0] > target) {
      right = midRow - 1;
    } else {
      left = midRow + 1;
    }
  }
  if (targetRow == -1)
    return false;
  left = 0, right = m - 1;
  while (left <= right) {
    int mid = left + ((right - left) / 2);
    if (mat[targetRow][mid] == target) {
      return true;
    } else if (mat[targetRow][mid] > target) {
      right = mid - 1;
    } else
      left = mid + 1;
  }
  return false;
}
