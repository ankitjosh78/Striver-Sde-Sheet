#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
  // Write your code here.
  sort(intervals.begin(), intervals.end());
  vector<vector<int>> ans;

  int n = (int)intervals.size();
  int maxEnd = intervals[0][1];
  ans.push_back({intervals[0][0], intervals[0][1]});
  for (int i = 1; i < n; i++) {
    if (intervals[i][0] > maxEnd) {
      ans.push_back({intervals[i][0], intervals[i][1]});
    } else {
      ans.back()[1] = max(maxEnd, intervals[i][1]);
    }
    maxEnd = ans.back()[1];
  }
  return ans;
}
