#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> names;
	vector<long long> grades;
	int n;
	cout << "Enter number of name/grade pairs: ";
	cin >> n;
	string name;
	long long grade;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> grade;
		names.push_back(name);
		grades.push_back(grade);
	}

	//MEAN

	double mean = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += grades[i];
	}
	mean = sum / n;
	cout << "Mean = " << mean << endl;

	//MEDIAN

	double median;
	sort(grades.begin(), grades.end());
	if (n % 2 != 0)
	{
		median = grades[n / 2];
	}
	else
	{
		double n1 = grades[n / 2], n2 = grades[(n / 2) - 1];
		median = (n1 + n2) / 2;
	}
	cout << "Median = " << median << endl;

	//MODE

	int c = 1;
	int max = -1, maxVal = grades[0];
	for (int i = 0; i < n; i++)
	{
		if (grades[i] == grades[i + 1])
		{
			c++;
		}
		else
		{
			if (c > 1)
			{
				if (c > max)
				{
					max = c;
					maxVal = grades[i];
				}
				c = 1;
			}
		}
	}
	cout << "Mode = " << maxVal;

	return 0;
}