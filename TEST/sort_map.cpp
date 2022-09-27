#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, key, value;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> key >> value;
		m[key] = value;
	}
	// int s = m.size();
	int arr1[n], arr2[n], k = 0;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		arr1[k] = (*i).first;
		arr2[k] = (*i).second;
		k++;
	}
	multimap<int, int> m2;
	cout << "Sorted Map" << endl;
	for (int i = 0; i < n; i++)
	{
		m2.insert(make_pair(arr2[i], arr1[i]));
	}
	for (auto i = m2.begin(); i != m2.end(); i++)
	{
		cout << (*i).second << " " <<  (*i).first << endl;
	}
	return 0;
}