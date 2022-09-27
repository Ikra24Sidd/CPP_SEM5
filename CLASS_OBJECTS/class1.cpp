#include <bits/stdc++.h>
using namespace std;

class car {
	int model;
protected:
	string color;
public:
	float cost;

	void input()
	{
		cin >> model >> color;
	}
	void display();
};

void car:: display()
{
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "Cost: " << cost;
}

int main()
{
	car c1;
	// c1.model = 2022; //error: as model is declared private
	c1.input();
	c1.cost = 52.45;
	c1.display();
	// c1.color = "Blue"; //error: as color is declared protected so, cannot be used outside class
	return 0;
}