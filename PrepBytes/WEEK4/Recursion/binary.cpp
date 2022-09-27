#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

void binary(int arr[], int k, int n)
{
	if (k == n)
	{
		print(arr, n);
		return;
	}
	if (arr[k - 1] != 1)
	{
		arr[k] = 0;
		binary(arr, k + 1, n);
		arr[k] = 1;
		binary(arr, k + 1, n);
	}
	else
	{
		arr[k] = 0;
		binary(arr, k + 1, n);
	}
}

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[n];
		arr[0] = 0;
		binary(arr, 1, n);
		arr[0] = 1;
		binary(arr, 1, n);
	}
	return 0;
}


// int count1(int arr[])
// {
// 	int c = 0;
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		if (s[i] == '1')
// 			c++;
// 	}
// 	return c;
// }

// string s = getBinary(n);
// 	cout << s << endl;
// 	int c = count1(s);
// 	cout << c << endl;
// 	int n=s.length();
// 	int arr[n];
// 	arr[0] = 0;
// 	binary(arr, 1, n);
// 	arr[0] = 1;
// 	binary(arr, 1, n);