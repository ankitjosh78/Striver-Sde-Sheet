#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
  // Write your code here.
  unordered_map<int, bool> mp;
  for (int i = 0; i < n; i++) {
    mp[arr[i]] = true;
  }
  int ans = 1, cur = 0;
  for (int i = 0; i < n; i++) {
    if (!mp.count(arr[i] - 1)) {
      cur = 1;
      while (mp.count(arr[i] + cur)) {
        cur++;
      }
      ans = max(ans, cur);
    }
  }
  return ans;
}
