#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int ans[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      ans[i] = 1;
    }
    int j = 0, i = 0;

    while (i < n) {
      if (i == j)
      {
        j++;
      }
      else {
        if (j > n - 1)
          break;
        ans[i] *= arr[j];
        if (j == (n - 1))
        {
          i++;
          j = 0;
        }
        else
          j++;
      }
    }
    for (int k = 0; k < n; k++) {
      cout << ans[k] << " ";
    }
  }
  return 0;
}