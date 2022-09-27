#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	int ch;
	while (t--)
	{
		int count[26] = {0}; //to store the count of every alphabet in an array, initially count of
		// alphabet will be zero
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			ch = s[i] - 'a';
			count[ch]++;  //count of alphabet will increase
			/*this will give the position of current alphabet in alphabetical order starting from
			the position 0
			E.g- a will be at position 0 , be at position and so on..
			So, if ith char is a, ch=97-97=0, for b, ch=98-97=1*/
		}
		char c;
		for (int i = 25; i >= 0; i--)
		{
			for (int j = 0; j < count[i]; j++)
			{
				c = 'a' + i;
				cout << c;
			}
		}
		cout << endl;
	}
	return 0;
}