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
	int key;
	cin >> key;
	sort(arr, arr + n);
	bool flag = false;
	for (int i = 0, j = n - 1; i < j;)
	{
		if ((arr[i] + arr[j]) == key)
		{
			cout << "Pair found (" << arr[i] << ", " << arr[j] << ")" << endl;
			flag = true;
			break;
		}
		else if ((arr[i] + arr[j]) < key)
		{
			i++;
		}
		else if ((arr[i] + arr[j]) > key)
		{
			j--;
		}
	}
	if (!flag)
		cout << "Pair not found" << endl;
	return 0;
}