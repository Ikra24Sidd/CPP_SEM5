//program to remove element at even position in stack

#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	int n, ele;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		s.push(ele);
	}
	// while (!s.empty())
	// {
	// 	cout << s.top() << endl;
	// 	s.pop();
	// }
	int j = 1;
	vector<int> v;
	while (!s.empty())
	{
		if (j % 2 != 0)
		{
			v.push_back(s.top());
		}
		j++;
		s.pop();
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		s.push(v[i]);
	}
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	return 0;

}


//1 2 3 4 5 6