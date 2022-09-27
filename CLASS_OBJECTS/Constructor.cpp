#include <bits/stdc++.h>
using namespace std;
class car
{
private:
	int model;
	float cost;
	string color;
public:
	// car()           //default constructor
	// {
	// 	// model = 2022;
	// 	// cost = 54.25;
	// 	cin >> model >> cost;
	// }

	car(int m, float c)   //parameterized constructor
	{
		model = m;
		cost = c;
	}

	// car (car &t1)
	// {
	// 	model = t1.model;
	// 	cost = t1.cost;
	// }

	void display();
};

void car::display()
{
	cout << model << " " << cost << endl;
}

int main()
{
	int m1;
	float c1;
	cin >> m1 >> c1;
	// car c1;        //default constructor is called
	car c(m1, c1);    //calling parameterized constructor by passing the parameters with object
	car cc = c;   //calling copy constructor by passing already created object as argument
	//
	c.display();
	cc.display();
	return 0;
}