#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
  // Write your code here.
  sort(arr.begin(), arr.end());
  vector<vector<int>> res;
  int left = 0, right = (int)arr.size() - 1;
  while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum < s) {
      left++;
    } else if (sum > s) {
      right--;
    } else {
      if (arr[left] != arr[right]) {
        int leftCount = 0, rightCount = 0;
        int i = left, j = right;
        while (arr[i] == arr[left]) {
          i++;
          leftCount++;
        }
        while (arr[j] == arr[right]) {
          j--;
          rightCount++;
        }
        for (int i = 0; i < leftCount * rightCount; i++) {
          res.push_back({arr[left], arr[right]});
        }
        left = i;
        right = j;
      } else {
        int distance = right - left + 1;
        int count = (distance * 1LL * (distance - 1)) / 2;
        for (int i = 0; i < count; i++) {
          res.push_back({arr[left], arr[right]});
        }
        return res;
      }
    }
  }
  return res;
}
