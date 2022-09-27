#include <bits/stdc++.h>
using namespace std;

int count1(string s)
{
	int c = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			c++;
	}
	return c;
}

int count11(int arr[], int n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			c++;
	}
	return c;
}

string getBinary(int n)
{
	string s = "";
	int rem = 0;
	while (n != 0)
	{
		rem = n % 2;
		n /= 2;
		s.insert(0, to_string(rem));
	}
	return s;
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << " ";
}

void allBinary(int arr[], int k, int n, int c)
{
	if (k == n)
	{
		int c1 = count11(arr, n);
		if ( c1 == c)
		{
			print(arr, n);
		}
		return;
	}
	arr[k] = 0;
	allBinary(arr, k + 1, n, c);
	arr[k] = 1;
	allBinary(arr, k + 1, n, c);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;
		string s = getBinary(num);
		// cout << s << endl;
		int c = count1(s);
		// cout << c << endl;
		// string s1 = "0";
		// allBinary(s1, 1, c);
		// s1 = "1";
		// allBinary(s1, 1, c);
		int n = s.length();
		int arr[n];
		arr[0] = 0;
		allBinary(arr, 1, n, c);
		arr[0] = 1;
		allBinary(arr, 1, n, c);
		cout << endl;
	}

	return 0;
}