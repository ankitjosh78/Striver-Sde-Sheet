#include <bits/stdc++.h>
void sort012(int *arr, int n) {
  int lastZero = 0, lastOne = n - 1;
  for (int i = lastZero; i <= lastOne;) {
    if (arr[i] == 0) {
      swap(arr[lastZero++], arr[i++]);
    } else if (arr[i] == 1) {
      i++;
    } else {
      swap(arr[lastOne--], arr[i]);
    }
  }
}
