#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int temp;
  if (arr[0] > arr[1])
  {
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
  }
  for (int i = 1; i < n - 1; i = i + 2)
  {
    if (arr[i] == arr[i + 1] && arr[i] == arr[i - 1])
      continue;
    else
    {
      if (arr[i + 1] > arr[i - 1])
      {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
      }
      else
      {
        temp = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}