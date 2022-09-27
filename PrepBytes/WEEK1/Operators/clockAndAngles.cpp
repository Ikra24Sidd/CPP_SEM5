#include <bits/stdc++.h>
using namespace std;


/*for this question we need to find the angle change per minute in a clock w.r.t both hour
hand and minute hand.
For hour hand 360 deg= 12 hours= 720 minutes, so 1 min= 0.5 deg
For minute hand 360 deg= 60 min, so 1 min = 6 deg
Now we have to get the total minutes, i.e we need to change the hour input into minutes
We can calculate the angle of hours using formula, 0.5*(h*60 + m)
Also we can calculate the angle of minutes using formula 6*m
The required answer will be the absolute diff between angle of hours and minutes*/

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int h, m;
		cin >> h >> m;
		if (h == 12)
			h = 0;
		if (m == 60)
		{
			m = 0;
			h += 1;
		}
		double hourAngle = 0.5 * (h * 60 + m);
		double minAngle = 6 * m;
		double angle = abs(hourAngle - minAngle);
		int ans = min(360 - angle, angle);
		cout << ans << endl;
	}
	return 0;
}