#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "PrepBytes";
	/*String iterator will iterate through each character of string
	Iterator is different from from for loop as we dont need to know the length of string,
	it will be handled by str.end() function

	There are 2 types of iterators, normal and reverse iterator. Reverse iterate will iterate
	through the string in reverse order, i.e from the end of string

	Normal Iterator has 2 functions:-
	str.begin()- it will store the beginning value of the string
	str.end()- it will store the end value of the string

	Reverse iterator also has 2 functions:-
	str.rbegin()- it will store the end value(reverse beginning value) of the string
	str.rend()- it will store the beginning value(reverse ending value) of the string */

	string::iterator sit;   //declaration of normal string iterator
	for (sit = str.begin(); sit != str.end(); sit++)
	{
		cout << *sit;     //we can iterate through every value using pointers
	}
	cout << endl;

	string::reverse_iterator rsit;  //declaration of string reverse iterator
	for (rsit = str.rbegin(); rsit != str.rend(); rsit++)
	{
		cout << *rsit;
	}
	return 0;
}