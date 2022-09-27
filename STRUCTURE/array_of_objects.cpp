#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int age, uid;
	string name;
};

int main()
{
	int n;
	cin >> n;
	Student s[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].uid >> s[i].age;
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i].name << "  " << s[i].uid << "  " << s[i].age << endl;
	}
	return 0;
}