//wap to check whether the char input is vowel or consonant
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	switch (ch)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u': cout << "vowel";
		break;
	default: cout << "Consonant";
	}
	return 0;
}