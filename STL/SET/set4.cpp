#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	int ch, x;
	cout << "1.Insert  2.Display  3.Exit" << endl;
	cin >> ch;
	while (ch != 3)
	{
		if (ch == 1)
		{
			cout << "Enter element: ";
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
		else if (ch == 2)
		{
			cout << "Elements in the set are: " << endl;
			for (auto i = s.begin(); i != s.end(); i++)
			{
				cout << *i << " ";
			}
			cout << endl;
		}
		else if (ch == 3)
		{
			break;
		}
		cin >> ch;
	}
	return 0;
}