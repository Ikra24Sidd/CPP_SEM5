#include <bits/stdc++.h>
using namespace std;

union Student
{
	int age, uid;
	double marks;
} s2;

int main()
{
	Student s1, s2, s3;
	cin >> s1.uid >> s2.marks >> s3.age ;
	// cout << sizeof(s2);
	cout << "Student 1:  UID: " << s1.uid << "   Marks: " << s2.marks << "   Age: " << s3.age << endl;
	return 0;
}