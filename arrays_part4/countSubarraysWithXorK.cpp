#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x) {
  //    Write your code here.
  int n = (int)arr.size();
  unordered_map<int, int> mp;
  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    sum ^= arr[i];
    if (sum == x) {
      ans++;
    }
    if (mp.count(sum ^ x)) {
      ans += mp[sum ^ x];
    }
    mp[sum]++;
  }
  return ans;
}
