// Operations on STRING
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cout << "str capacity = " << str.capacity() << endl;
	cin >> str;

	/*capacity is the max number of characters the string can store. Its value keeps on
	increasing as we input value in string having length more than initial capacity.
	Lets say initially the string capacity is 15, and we've input a string of length 20,
	then string capacity will automatically increase by some value*/
	cout << "str capacity = " << str.capacity() << endl;

	/*String length is the number of characters stored in the string,
	NOTE: length is not same as capacity*/
	cout << "str length = " << str.length() << endl;

	/*resize function will resize the length of the string according to the value passed*/
	/*NOTE: if the value passed is less than the length of string, then length of string
	will decrease and the value inside the string will also be trimmed as per the new length,
	but the capacity of the string will remain same
	If the value passed is greater than the length of the string and also greater than the
	capacity of the string, then the capacity of string will also inc by some value*/
	str.resize(4);

	cout << "str capacity after resizing = " << str.capacity() << endl;
	cout << "str length after resizing = " << str.length() << endl;
	cout << str;
	return 0;
}