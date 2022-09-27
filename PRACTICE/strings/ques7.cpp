#include <bits/stdc++.h>
using namespace std;
int countMaxRepeatingLetter(string st, int sIdx, int eIdx)
{
	int count = 0, max = 0;
	for (int i = sIdx; i <= eIdx; i++)
	{
		count = 0;
		for (int j = i; j <= eIdx; j++)
		{
			if (st[i] == st[j])
				count++;
		}
		if (count > max)
			max = count;
	}
	return max;
}

int main()
{
	string str;
	getline(cin, str);
	int sIdx = 0, max = 0, maxSidx = 0, maxEidx = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' || i == str.length() - 1)
		{
			int countMax = countMaxRepeatingLetter(str, sIdx, i - 1);
			// cout << countMax << endl;
			if (countMax > max)
			{
				max = countMax;
				maxSidx = sIdx;
				maxEidx = i - 1;
				if (i == str.length() - 1)
					maxEidx = i;
			}
			sIdx = i + 1;
		}
	}
	for (int i = maxSidx; i <= maxEidx; i++)
	{
		cout << str[i];
	}
	return 0;
}