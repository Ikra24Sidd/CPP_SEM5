#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string op, fp, fp1;
	while (t--)
	{
		cin >> op >> fp;
		fp1 = fp;
		int k = 2, len = fp1.length() - 1;
		char temp;
		bool flag = false;
		//right rotate
		while (k--)
		{
			temp = fp1[len];
			for (int i = len - 1; i >= 0; i--)
			{
				fp1[i + 1] = fp1[i];
			}
			fp1[0] = temp;
		}
		if (fp1 == op)
		{
			cout << "Yes" << endl;
			flag = true;
		}
		else
		{
			k = 2;
			fp1 = fp;
			while (k--)
			{
				temp = fp1[0];
				for (int i = 1; i <= len; i++)
				{
					fp1[i - 1] = fp1[i];
				}
				fp1[len] = temp;
			}
			if (fp1 == op)
			{
				cout << "Yes" << endl;
				flag = true;
			}
		}
		if (!flag)
			cout << "No" << endl;
	}
	return 0;
}