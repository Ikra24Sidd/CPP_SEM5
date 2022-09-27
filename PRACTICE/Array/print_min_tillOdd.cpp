//given an array A, find the min ele upto every odd index till N
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
	int minEle = min(arr[0], arr[1]), nextMin = INT_MAX;
	cout << minEle << " ";
	for (int i = 2; i < n; i = i + 2)
	{
		nextMin = min(arr[i], arr[i + 1]);
		minEle = min(minEle, nextMin);
		cout << minEle << " ";
	}
	return 0;
}