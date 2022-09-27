#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int arr1[n], arr2[m];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	int x = n + m;
	int arr3[x];
	int i = 0, j = 0, k = 0;
	for (i = 0, j = 0; i < n && j < m; )
	{
		if (arr1[i] <= arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
			k++;
		}
		else if (arr2[j] < arr1[i])
		{
			arr3[k] = arr2[j];
			j++;
			k++;
		}
	}
	while (i < n)
	{
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	while (j < m)
	{
		arr3[k] = arr2[j];
		j++;
		k++;
	}
	for (int l = 0; l < x; l++)
	{
		cout << arr3[l] << " ";
	}
	return 0;
}