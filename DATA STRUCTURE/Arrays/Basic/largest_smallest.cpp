#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int s = arr[0], l = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < s)
			s = arr[i];
		if (arr[i] > l)
			l = arr[i];
	}
	cout << "Smallest = " << s << endl;
	cout << "Largest = " << l << endl;
	return 0;
}