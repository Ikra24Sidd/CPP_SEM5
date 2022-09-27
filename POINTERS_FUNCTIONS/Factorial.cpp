#include <bits/stdc++.h>
using namespace std;

int fact(int *num)
{
	int fact = 1;
	while (*num != 1)
	{
		fact *= (*num);
		(*num)--;
	}
	return fact;
}

int main()
{
	int n;
	cin >> n;
	int res = fact(&n);
	cout << res;
	return 0;
}