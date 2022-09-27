#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int s = 0; s < t; s++) {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }
    int target;
    cin >> target;
    int a = -1, b = -1;
    for (int i = 0; i < n; i++) {
      if (arr[i][m - 1] >= target) {
        a = i;
        break;
      }
    }
    for (int i = 0; i < m; i++) {
      if (arr[a][i] == target) {
        b = i;
        break;
      }
    }
    if (a == -1 || b == -1) {
      cout << -1 << " " << -1 << endl;
    }
    else {
      cout << a + 1 << " " << b + 1 << endl;
    }
  }
  return 0;
}