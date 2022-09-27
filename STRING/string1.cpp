#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	// cin >> str;       //this will only take a single word, i.e until space is encountered
	// getline(cin, str);   //this will take a line of input until enter is pressed
	str = "my name";
	str.push_back('I');  //push back will take only single character an add it at end of string
	cout << str << endl;
	str.pop_back();   // pop back will remove single character from end of string
	cout << str;
	return 0;
}