#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long gas[n], cost[n];
	for (int i = 0; i < n; i++)
	{
		cin >> gas[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> cost[i];
	}
	int k = -1;
	long long sum = 0, currSum = 0;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if (gas[i] >= cost[i])
		{
			k = i;
			break;
		}
	}
	if (k == -1)
	{
		cout << -1;
		return 0;
	}
	for (int i = k; i < n; i++)
	{
		if ((sum + gas[i] - cost[i]) >= 0)
		{
			sum = (sum + gas[i]) - cost[i];
		}
		else
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		for (int i = 0; i < k; i++)
		{
			if ((sum + gas[i] - cost[i]) >= 0)
			{
				sum = (sum + gas[i]) - cost[i];
			}
			else
			{
				flag = false;
				break;
			}
		}
	}
	if (flag)
	{
		cout << k;
	}
	else
	{
		cout << -1;
	}
	return 0;
}