#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {
  // Write your code here
  long long targetSum = (n * 1LL * (n + 1)) / 2;
  long long targetSumOfSquares = (n * 1LL * (n + 1) * (2 * n + 1)) / 6;

  long long sum = 0LL, sumOfSquares = 0LL;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    sumOfSquares += (arr[i] * 1LL * arr[i]);
  }

  long long differenceRepeatAndMissing = sum - targetSum;
  long long differenceOfSquaresRepeatAndMissing =
      sumOfSquares - targetSumOfSquares;

  long long repeat =
      differenceOfSquaresRepeatAndMissing / differenceRepeatAndMissing;
  repeat += differenceRepeatAndMissing;
  repeat /= 2;

  long long missing = repeat - differenceRepeatAndMissing;

  return {missing, repeat};
}
