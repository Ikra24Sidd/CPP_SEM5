#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s = {10, 5, 20};
	auto i = s.find(10);
	if (i == s.end())
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "found" << endl;
	}
	while (i != s.end())
	{
		cout << *i << " ";
		i++;
	}
	cout << endl << s.size();
	return 0;

}