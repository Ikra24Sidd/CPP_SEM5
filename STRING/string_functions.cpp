#include <bits/stdc++.h>
using namespace std;
int main()
{
	// COPY FUNCTION
	string str = "PrepBytes";
	char ch[10];           //only character array is valid, we cannot use string inside
	str.copy(ch, 5, 2);   //str.copy(char array, no. of characters to copy, start index)
	cout << ch;

	//SWAP FUNCTION
	string str1 = "ikra", str2 = "umra";
	cout << str1 << " " << str2 << endl;
	str1.swap(str2);
	cout << str1 << " " << str2;
	return 0;
}