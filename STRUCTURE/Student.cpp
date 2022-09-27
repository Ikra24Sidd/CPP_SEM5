#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int age, uid;
	string name;
} s1;   // can create an object like this also
int main()
{
	Student s2;
	cin >> s1.name >> s1.uid >> s1.age;
	cin >> s2.name >> s2.uid >> s2.age;
	cout << "Student 1:   Name: " << s1.name << "   UID: " << s1.uid << "   Age: " << s1.age << endl;
	cout << "Student 2:   Name: " << s2.name << "   UID: " << s2.uid << "   Age: " << s2.age << endl;
	return 0;
}