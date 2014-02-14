#ifndef Ex_7
#define Ex_7

#include <iostream>
#include <vector>
#include <cmath>
#include "myException.cpp"

using namespace std;

class Ex7
{
public:
	void Go()
	{
		double a,b,c;
		cout << "Input a:";
		cin >> a;

		cout << "Input b:";
		cin >> b;

		cout << "Input c:";
		cin >> c;

		try
		{
			CalculateRoots(a,b,c);
		}
		catch(MyException &e)
		{
			cout << e.what() << endl;
		}
	}

private:
	void CalculateRoots(double a, double b, double c)
	{
		/*
		 * -b +- sqrt(b^2 - 4*a*c)
		 *
		 * /
		 * 2*a
		 */
		throw MyException("Hi");

	 double temp = (b*b) - (4*a*c);

	 if(temp < 0)
	 {
		 throw MyException("Hi");
	 }
	 temp = sqrt(temp);

	 double posAns = (-1 * b + temp) / 2*a;
	 double negAns = (-1 * b - temp) / 2*a;

	 cout << "x = " << posAns << endl;
	 cout << "x = " << negAns << endl;


	}

};
#endif
