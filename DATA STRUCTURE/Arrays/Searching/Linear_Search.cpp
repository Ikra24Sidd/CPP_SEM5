#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n], key;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Enter the key element : ";
	cin >> key;
	int flag = false;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			cout << "Element fount at index = " << i;
			flag = true;
			break;
		}
	}
	if (!flag)
		cout << "Element not found!";
	return 0;
}