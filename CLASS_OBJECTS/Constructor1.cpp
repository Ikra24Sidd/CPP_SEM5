#include <bits/stdc++.h>
using namespace std;

class car
{
private:
	int model;
	float cost;
	string *color;
public:
	car()
	{
		color = new string;
	}

	car(int &m, float &c, string &clr)   //parameterized constructor
	{
		model = m;
		cost = c;
		*color = clr;
	}

	void display()
	{
		cout << model << " " << cost << " " << *color << endl;
	}

	~car()
	{
		cout << "Destructor invoked!" << endl;
	}
};

int main()
{
	// car c;
	int model;
	float cost;
	string clr;
	cin >> model >> cost >> clr;
	car c1(model, cost, clr);
	c1.display();
	return 0;
}