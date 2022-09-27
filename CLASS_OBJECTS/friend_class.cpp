#include <bits/stdc++.h>
using namespace std;

class car {
	int model;
protected:
	string color;
public:
	float cost;

	friend class car1;   // declaring a friend class of car(inside class car only)
};

class car1        //defining the friend class car1
{
public:
	void input(car &t)
	{
		cin >> t.model >> t.color;
		// cout << "Model: " << t.model << endl;
		// cout << "Color: " << t.color;
	}

	void display(car t)
	{
		cout << "Model: " << t.model << endl;
		cout << "Color: " << t.color;
	}
};

int main()
{
	car c2;
	car1 c1;
	c1.input(c2);
	c1.display(c2);
	return 0;
}