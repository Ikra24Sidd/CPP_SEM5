#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;
Node *head1 = NULL;

void insert_end(int newData)
{
	Node *new_node = new Node();
	new_node->data = newData;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	Node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void display()
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "NULL";
}


void createArr(int arr[])
{
	Node *temp = head;
	int i = 0;
	while (temp != NULL)
	{
		arr[i] = temp->data;
		temp = temp->next;
		i++;
	}
}

void makeZero(vector<int> &sol, vector<int> &vpos, vector<int> &vneg)
{
	int s = 0, e = sol.size() - 1;
	for (int i = 0; i < vpos.size(); i++)
	{
		if (vpos[i] == sol[s])
		{
			vpos[i] = 0;
			s++;
		}
	}
	for (int i = 0; i < vneg.size(); i++)
	{
		if (vneg[i] == sol[e])
		{
			vneg[i] = 0;
			e--;
		}
	}
}

void makeZero2(vector<int> &sol, vector<int> &vpos, vector<int> &vneg)
{
	int s = 0, e = sol.size() - 1;
	for (int i = vneg.size() - 1; i >= 0; i--)
	{
		if (vneg[i] == sol[s])
		{
			vneg[i] = 0;
			s++;
		}
	}
	for (int i = 0; i < vpos.size(); i++)
	{
		if (vpos[i] == sol[e])
		{
			vpos[i] = 0;
			e--;
		}
	}
}

int main()
{
	int n, ele;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		m[i] = ele;
		insert_end(ele);
	}

	int arr[n];
	createArr(arr);
	// display();
	sort(arr, arr + n);
	vector<int> vneg, vpos, sol;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			vneg.push_back(arr[i]);
		else if (arr[i] > 0)
			vpos.push_back(arr[i]);
	}

	for (int i = 0; i < vneg.size(); i++)
	{
		int temp = abs(vneg[i]);
		bool flag = false;
		for (int j = 0; j < vpos.size(); j++)
		{
			if (temp == vpos[j])
			{
				flag = true;
				sol.push_back(vpos[j]);
				sol.push_back(vneg[i]);
				makeZero(sol, vpos, vneg);
				sol.clear();
				break;
			}
		}
		if (!flag)
		{
			for (int j = 0; j < vpos.size(); j++)
			{
				if (temp == vpos[j])
				{
					sol.push_back(vpos[j]);
					sol.push_back(vneg[i]);
					makeZero(sol, vpos, vneg);
					sol.clear();
					break;
				}
				else if (abs(vneg[i]) == vpos[j])
				{
					sol.clear();
					sol.push_back(vpos[j]);
					sol.push_back(vneg[i]);
					makeZero(sol, vpos, vneg);
					sol.clear();
					break;
				}
				else if (temp < vpos[j])
				{
					sol.clear();
					break;
				}
				else if (temp > vpos[j])
				{
					sol.push_back(vpos[j]);
					temp -= vpos[j];
				}
			}
		}
	}

	for (int i = 0; i < vpos.size(); i++)
	{
		bool flag = false;
		int temp = vpos[i];
		for (int j = 0; j < vneg.size(); j++)
		{
			if (abs(vneg[j]) == temp)
			{
				flag = true;
				sol.push_back(vneg[j]);
				sol.push_back(vpos[i]);
				makeZero2(sol, vpos, vneg);
				sol.clear();
				break;
			}
		}
		if (!flag)
		{
			for (int j = vneg.size() - 1; j >= 0; j--)
			{
				if (temp == abs(vneg[j]))
				{
					sol.push_back(vneg[j]);
					sol.push_back(vpos[i]);
					makeZero2(sol, vpos, vneg);
					sol.clear();
					break;
				}
				else if (abs(vneg[j]) == vpos[i])
				{
					sol.clear();
					sol.push_back(vneg[j]);
					sol.push_back(vpos[i]);
					makeZero2(sol, vpos, vneg);
					sol.clear();
					break;
				}
				else if (temp < abs(vneg[j]) || abs(vneg[j]) == 0)
				{
					sol.clear();
					break;
				}
				else if (temp > abs(vneg[j]))
				{
					sol.push_back(vneg[j]);
					temp -= abs(vneg[j]);
				}
			}
		}
	}


	// for (int i = 0; i < vneg.size(); i++)
	// {
	// 	cout << vneg[i] << " ";
	// }
	// cout << endl;
	// for (int i = 0; i < vpos.size(); i++)
	// {
	// 	cout << vpos[i] << " ";
	// }
	// cout << endl;


	vector<int> finalSol;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		for (int j = 0; j < vneg.size(); j++)
		{
			if ((*i).second == vneg[j])
				finalSol.push_back(vneg[j]);
		}
		for (int j = 0; j < vpos.size(); j++)
		{
			if ((*i).second == vpos[j])
				finalSol.push_back(vpos[j]);
		}
	}

	head = NULL;
	for (int i = 0; i < finalSol.size(); i++)
	{
		insert_end(finalSol[i]);
	}

	display();
	return 0;
}


//Test case 1:

//INPUT
//7
// 2 8 -6 3 -5 6 7

//OUTPUT
//8 7 NULL


//Test case 2:

//INPUT
//7
// 2 -5 -3 4 -1 5 7

//OUTPUT
//2 7 NULL


//Test case 3:

//INPUT
//8
//2 3 -5 -3 4 -1 5 7

//OUTPUT
//2 4 -1 7 NULL

//Test case 4:

//INPUT
//8
//2 1 -5 -3 4 -1 5 7

//OUTPUT
//4 -1 7 NULL

//Test case 5:

//INPUT
//7
//-2 3 5 -1 4 -5 7

//OUTPUT
//4 7 NULL



