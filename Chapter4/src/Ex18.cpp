#ifndef EX18
#define EX18
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Ex18
{
public:
	void Go()
	{
		/*
		 * -b +- sqrt(b^2 - 4*a*c)
		 *
		 * /
		 * 2*a
		 */

		double a,b,c;
		cout << "Input a:";
		cin >> a;

		cout << "Input b:";
		cin >> b;

		cout << "Input c:";
		cin >> c;

	 double temp = (b*b) - (4*a*c);
	 temp = sqrt(temp);

	 double posAns = (-1 * b + temp) / 2*a;
	 double negAns = (-1 * b - temp) / 2*a;

	 cout << "x = " << posAns << endl;
	 cout << "x = " << negAns << endl;


	}
};

#endif
