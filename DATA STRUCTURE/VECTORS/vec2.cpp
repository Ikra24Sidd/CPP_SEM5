#include <bits/stdc++.h>
using namespace std;
int main()
{
	// vector<int> v1{1, 2, 3, 4, 5};
	// vector<int>:: iterator i = v1.begin();
	// // for (int j = 0; j < 5; j++)
	// // {
	// // 	v1.insert(i, n);
	// // 	i++;
	// // }


	// v1.insert(i, 100);
	// for (int j = 0; j < v1.size(); j++)
	// {
	// 	cout << v1[j] << " ";
	// }

	int n;
	vector<int> v2;
	vector<int>:: iterator i = v2.begin();
	// for (i = v2.begin(); i != v2.end(); i++)
	// {
	// 	v2.insert(i, n);
	// }
	for (int k = 0; k < 5; k++)
	{
		cin >> n;
		v2.push_back(n);
	}
	for (int j = 0; j < v2.size(); j++)
	{
		cout << v2[j] << " ";
	}
	return 0;
}