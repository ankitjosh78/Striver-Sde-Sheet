#include <bits/stdc++.h>
int uniqueSubstrings(string input) {
  // Write your code here
  int n = (int)input.size();
  unordered_map<char, int> mp;
  int left = 0, right = 0;
  int len = 0;
  while (right < n) {
    char c1 = input[right];
    mp[c1]++;
    while (mp[c1] > 1) {
      char c2 = input[left];
      mp[c2]--;
      left++;
    }
    len = max(len, right - left + 1);
    right++;
  }
  return len;
}
