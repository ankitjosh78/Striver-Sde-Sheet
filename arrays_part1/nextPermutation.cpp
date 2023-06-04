#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &permutation, int n) {
  //  Write your code here.
  int pivot = -1;
  for (int i = n - 2; i >= 0; i--) {
    if (permutation[i] < permutation[i + 1]) {
      pivot = i;
      break;
    }
  }
  if (pivot == -1) {
    sort(permutation.begin(), permutation.end());
    return permutation;
  }

  for (int i = n - 1; i > pivot; i--) {
    if (permutation[i] > permutation[pivot]) {
      swap(permutation[i], permutation[pivot]);
      break;
    }
  }

  reverse(permutation.begin() + pivot + 1, permutation.end());
  return permutation;
}
