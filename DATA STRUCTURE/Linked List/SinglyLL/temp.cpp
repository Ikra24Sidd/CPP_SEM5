#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
  // base case
  if (n == 0) {
    return 0;
  }
  return  (n % 10 + sum(n / 10));
}

int main()
{
  //write your code here

  int n;
  cin >> n;
  int count = 0;
  int ans = sum(n);
  cout << ans;
  return 0;
}