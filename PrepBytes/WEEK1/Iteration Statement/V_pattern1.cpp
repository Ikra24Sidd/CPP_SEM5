#include <bits/stdc++.h>
using namespace std;

int main()
{
	//write your code here
	char ch;
	cin >> ch;
	// for (int i = 1; i <= 5; i++)
	// {
	// 	for (int j = 1; j <= 5; j++)
	// 	{
	// 		if (j <= i)
	// 			cout << j;
	// 		else
	// 			cout << " ";
	// 	}
	// 	for (int j = 1; j <= 5; j++)
	// 	{
	// 		if (j <= 5 - i)
	// 			cout << " ";
	// 		else
	// 			cout << 5 - j + 1;
	// 	}
	// 	cout << endl;
	// }

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j <= i)
				cout << j;
			else if (j >= 10 - i + 1)
				cout << 10 - j + 1;
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}