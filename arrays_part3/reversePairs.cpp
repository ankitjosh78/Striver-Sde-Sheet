#include <bits/stdc++.h>

int mergeStep(vector<int> &arr, vector<int> &temp, int start, int mid,
              int end) {
  int ans = 0;
  int i = start, j = mid + 1, k = start, p = mid + 1;
  while (i <= mid) {
    while (p <= end && arr[i] > 2 * arr[p])
      p++;
    ans += (p - mid - 1);
    while (j <= end && arr[i] > arr[j]) {
      temp[k++] = arr[j++];
    }
    temp[k++] = arr[i++];
  }
  while (j <= end) {
    temp[k++] = arr[j++];
  }
  k = start;
  for (int i = start; i <= end; i++, k++) {
    arr[i] = temp[k];
  }
  return ans;
}

int countPairs(vector<int> &arr, vector<int> &temp, int start, int end) {
  if (start >= end)
    return 0;

  int mid = (start + end) / 2;
  int ans = 0;
  ans += countPairs(arr, temp, start, mid);
  ans += countPairs(arr, temp, mid + 1, end);

  ans += mergeStep(arr, temp, start, mid, end);
  return ans;
}
int reversePairs(vector<int> &arr, int n) {
  // Write your code here.
  vector<int> temp(n, 0);
  return countPairs(arr, temp, 0, n - 1);
}
