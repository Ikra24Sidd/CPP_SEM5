#include <bits/stdc++.h>
using namespace std;
int main()
{
	int *ptr[5];
	int a[5], i = 0;
	while (i < 5)
	{
		// ptr = &a[i];
		ptr[i] = &a[i];
		i++;
		// ptr++;
	}
	for (int j = 0; j < 5; j++)
		cout << ptr[i] << " ";
	return 0;
}