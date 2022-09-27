#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int age, uid;
	string name;
};

int main()
{
	Student s1;
	Student *s2 = &s1;
	cin >> s2->name >> s2->uid >> s2->age;
	cout << "Name: " << s2->name << endl;
	cout << "UID: " << s2->uid << endl;
	cout << "Age: " << s2->age << endl;
	return 0;
}