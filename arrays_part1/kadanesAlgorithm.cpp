#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n) {
  /*
      Don't write main().
      Don't read input, it is passed as function argument.
      No need to print anything.
      Taking input and printing output is handled automatically.
  */
  long long curBest = 0LL, curMax = 0LL;
  for (int i = 0; i < n; i++) {
    curBest = max(0LL, curBest + arr[i]);
    curMax = max(curMax, curBest);
  }
  return curMax;
}
