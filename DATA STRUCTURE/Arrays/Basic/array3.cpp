/*WAP to enter the name of a student and marks in the subject in English, Maths, Science, social
and display the average marks of the student with full name in seperate line */

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string name;
	int marks[4], sum = 0;
	getline(cin, name);
	for (int i = 0; i < 4; i++)
	{
		cin >> marks[i];
		sum += marks[i];
	}
	double avg = sum / 4.0;
	cout << "Name = " << name << endl;
	cout << "Average = " << avg << endl;

	return 0;
}