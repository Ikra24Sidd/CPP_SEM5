#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	int x;
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		try
		{
			if (s.find(x) != s.end())
			{

				throw x;
			}
		}
		catch (...)
		{
			cout << "Element already present" << endl;
		}
		s.insert(x);
	}
	cout << "Elements in the set are: " << endl;
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << " ";
	}
	return 0;
}