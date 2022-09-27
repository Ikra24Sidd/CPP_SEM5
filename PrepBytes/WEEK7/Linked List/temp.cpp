#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &h)
{
  int i = 0, j = h.size() - 1, area = 0, max = 0;
  while (i < j)
  {
    area = (min(h[i], h[j])) * (j - 1);
    if (h[i] < h[j])
      i++;
    else if (h[i] > h[j])
      j--;
    if (area > max)
      max = area;
  }
  return max;
}

int main() {
  int n;
  cin >> n;
  vector<int> v1;
  int ele;
  for (int i = 0; i < n; i++) {
    cin >> ele;
    v1.push_back(ele);
  }
  int ans = maxArea(v1);
  cout << ans << endl;
}