#include <bits/stdc++.h>
using namespace std;

union Student {
	int uid, age;
	string name;
};

int main()
{
	Student s1, s2, s3;
	Student *p1 = &s1, *p2 = &s2, *p3 = &s3;
	cin >> p1->name >> p2->uid >> p3->age;
	cout << p1->name << "  " << p2->uid << "  " << p3->age;
	return 0;
}