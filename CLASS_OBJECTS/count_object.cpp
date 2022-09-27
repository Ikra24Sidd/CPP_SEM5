#include <bits/stdc++.h>
using namespace std;

int Count = 0;
class car
{
private:
	int model;
	float cost;
	string color;

public:
	car()
	{
		Count++;
	}
	void input()
	{
		cin >> model >> cost >> color;
	}
	void display()
	{
		cout << model << " " << cost << " " << color << endl;
	}
};

int main()
{
	car c1, c2, c3, c4, c5;
	cout << Count;
	return 0;
}