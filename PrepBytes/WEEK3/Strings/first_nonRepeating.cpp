#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		bool flag = false;
		for (int i = 0; i < str.length(); i++)
		{
			int count = 0;
			for (int j = 0; j < str.length(); j++)
			{
				if (str[i] == str[j])
					count++;
			}
			if (count == 1)
			{
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1 << endl;
	}
	return 0;
}


//xxyezzde