#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int age, uid;
	string name;
};

void display(Student k1)
{
	cout << "Name: " << k1.name << endl;
	cout << "UID: " << k1.uid << endl;
	cout << "Age: " << k1.age << endl;
}

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
		display(s[i]);
	}
	return 0;
}