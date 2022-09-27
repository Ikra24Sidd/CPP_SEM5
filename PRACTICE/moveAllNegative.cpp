#include <bits/stdc++.h>
using namespace std;

void moveAllNeg(int arr[], int n)
{
	int temp, i = 0, j = n - 1;
	while (i < j)
	{
		if (arr[i] < 0 && arr[j] >= 0)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		else if (arr[i] >= 0)
		{
			i++;
		}
		else if (arr[j] < 0)
		{
			j--;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	moveAllNeg(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}