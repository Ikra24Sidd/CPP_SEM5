#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n], prod = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			prod *= arr[i];
		}
		cout << prod << endl;
	}
	return 0;
}