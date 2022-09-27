//Program to find the union and intersection of 2 sorted arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr1[n], arr2[m];
	cout << "Enter the elements of array 1: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	cout << "Enter the elements of array 2: ";
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	vector<int> Union;
	vector<int> intr;

	//for intersection
	for (int i = 0, j = 0; i < n && j < m;)
	{
		if (arr1[i] == arr2[j])
		{
			intr.push_back(arr1[i]);

			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			i++;
		}
		else
			j++;
	}

	cout << "\nIntersection: ";
	for (int i = 0; i < intr.size(); i++)
	{
		cout << intr[i] << " ";
	}

	//for Union
	int i, j;
	for (i = 0, j = 0; i < n && j < m; )
	{
		if (arr1[i] < arr2[j])
		{
			Union.push_back(arr1[i]);
			i++;
		}
		else if (arr1[i] > arr2[j])
		{
			Union.push_back(arr2[j]);
			j++;
		}
		else if (arr1[i] == arr2[j])
		{
			Union.push_back(arr1[i]);
			i++;
			j++;
		}
	}

	while (i < n)
	{
		Union.push_back(arr1[i]);
		i++;
	}
	while (j < m)
	{
		Union.push_back(arr2[j]);
		j++;
	}

	cout << "\nUnion: ";
	for (int k = 0; k < Union.size(); k++)
	{
		cout << Union[k] << " ";
	}

	return 0;
}