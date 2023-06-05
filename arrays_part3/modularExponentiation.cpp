#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
  // Write your code here.
  if (n == 0)
    return 1;
  int res = modularExponentiation(x, n / 2, m);
  res = (res * 1LL * res) % m;
  if (n & 1) {
    res = (res * 1LL * x) % m;
  }
  return res;
}
