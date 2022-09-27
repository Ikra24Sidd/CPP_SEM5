#include <bits/stdc++.h>
using namespace std;
int main()
{
	// vector<int> v1;
	vector<int> v1{10, 20, 30};
	// for (int i = 0; i < 3; i++)
	// {
	// 	cout << v1[i] << " ";
	// }

	//by default the vector values are initialized with 0
	// vector<int> v2(n, 10);
	// vector<int> v2(v1.begin(), v1.end());  //to copy the elements of v1 to v2
	vector<int> v2 = v1;  //to copy the elements of v1 to v2
	// cout << v2.size()<<endl;
	// v2.push_back(20);
	// cout << v2.size()<<endl;
	// for (int i = 0; i < v2.size(); i++)
	// {
	// 	cout << v2[i] << " ";
	// }
	vector<int>:: iterator i;
	for (i = v2.begin(); i != v2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	int n = 10;
	vector<int> v3{1, 2, 3, 4, 5};
	// for (auto i = v3.begin(); i != v3.end(); i++)
	// {
	// 	*i = n++;
	// 	cout << *i << " ";
	// }

	/*cbegin and cend are constant iterators, i.e we cant change any value using it, but it
	be used to display the value*/
	// for (auto i = v3.cbegin(); i != v3.cend(); i++)
	// {
	// 	// *i = n++;
	// 	cout << *i << " ";
	// }
	for (auto i = v3.rbegin(); i != v3.rend(); i++)
	{
		// *i = n++;
		cout << *i << " ";
	}
	return 0;
}