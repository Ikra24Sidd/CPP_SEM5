#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int *y = arr;

	//METHOD 1:
	// for (int i = 0; i < 10; i++)
	// {
	// 	cout << *(y + i) << " ";
	// }

	//METHOD 2:
	int i = 0;
	while (i < 10)
	{
		cout << *y << " ";
		y++;
		i++;
	}
	return 0;
}