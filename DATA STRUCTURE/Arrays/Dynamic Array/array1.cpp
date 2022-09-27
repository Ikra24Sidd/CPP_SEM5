#include <bits/stdc++.h>
using namespace std;
int main()
{

	//initializing dynamic array
	// int *arr1{new int[5]{1, 2, 3, 4, 5}};
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << arr1[i] << " ";
	// }
	// cout << endl;

	int n;
	cin >> n;
	int *arr = new int(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete arr;   //this will delete the array from memory/ memory will be free
	cout << "\n" << arr[0];
	return 0;
}