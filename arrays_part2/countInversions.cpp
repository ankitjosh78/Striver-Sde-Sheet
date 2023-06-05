#include <bits/stdc++.h>

long long mergeStepInversions(long long *arr, long long temp[], int start,
                              int mid, int end) {
  long long ans = 0LL;
  int i = start, j = mid + 1, k = start;
  while (i <= mid && j <= end) {
    if (arr[i] > arr[j]) {
      ans += (mid - i + 1);
      temp[k++] = arr[j++];
    } else {
      temp[k++] = arr[i++];
    }
  }
  while (j <= end) {
    temp[k++] = arr[j++];
  }
  while (i <= mid) {
    temp[k++] = arr[i++];
  }
  k = start;
  for (int i = start; i <= end; i++, k++) {
    arr[i] = temp[k];
  }
  return ans;
}

long long countInversions(long long *arr, long long temp[], int start,
                          int end) {
  if (start >= end)
    return 0LL;

  long long ans = 0LL;
  int mid = (start + end) / 2;
  ans += countInversions(arr, temp, start, mid);
  ans += countInversions(arr, temp, mid + 1, end);
  ans += mergeStepInversions(arr, temp, start, mid, end);

  return ans;
}
long long getInversions(long long *arr, int n) {
  // Write your code here.
  long long temp[n];
  return countInversions(arr, temp, 0, n - 1);
}
