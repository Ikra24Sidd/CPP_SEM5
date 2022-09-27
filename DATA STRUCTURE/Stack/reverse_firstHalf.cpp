//given a stack, reverse the first half of the elements, put it back on the stack and return stack

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
	vector<int> v;
	while (!s.empty())
	{
		v.push_back(s.top());
		s.pop();
	}
	int m = v.size(), k = v.size() / 2, temp;
	for (int i = v.size() - 1, j = m - k; i > j; i--, j++)
	{
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
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