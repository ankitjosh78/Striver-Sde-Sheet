#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices) {
  // Write your code here.
  int n = (int)prices.size();
  int ans = 0;
  int maxFromHere = prices[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    maxFromHere = max(maxFromHere, prices[i]);
    ans = max(ans, maxFromHere - prices[i]);
  }
  return ans;
}
