#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v1 = {10, 20, 30};
	int a;
	vector<int>::iterator i;
	for (int j = 1; j <= 5; j++)
	{
		cin >> a;
		i = v1.begin();  //it will insert the elements at the beginning
		// i = v1.end();  //it will insert the elements at the end
		//insert will take 2 values, pointer where value is to be insert and the value
		v1.insert(i, a);    //insert(pointer to insert, value)
	}
	for (auto k = v1.begin(); k != v1.end(); k++)
	{
		cout << *k << " ";
	}
	return 0;
}