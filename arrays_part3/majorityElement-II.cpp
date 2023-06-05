#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr) {
  // Write your code here.
  int n = (int)arr.size();
  int cnt1 = 0, cnt2 = 0, element1 = -1, element2 = -1;
  for (int i = 0; i < n; i++) {
    if (!cnt1 && arr[i] != element2) {
      cnt1 = 1;
      element1 = arr[i];
    } else if (!cnt2 && arr[i] != element1) {
      cnt2 = 1;
      element2 = arr[i];
    } else if (arr[i] == element1) {
      cnt1++;
    } else if (arr[i] == element2) {
      cnt2++;
    } else {
      cnt1--;
      cnt2--;
    }
  }
  vector<int> res;
  cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == element1)
      cnt1++;
    if (arr[i] == element2)
      cnt2++;
  }
  if (cnt1 > (n / 3))
    res.push_back(element1);
  if (cnt2 > (n / 3))
    res.push_back(element2);

  sort(res.begin(), res.end());
  return res;
}
