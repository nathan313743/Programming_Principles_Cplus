#include <iostream>
using namespace std;

class Ex5
{
public:
	void Go()
	{
		double c = 0;
		cin >> c;
		double k = ktoc(c);
		cout << k << endl;
	}

private:
	double ctok(double c)
	{
		if(c < -273.15)
		{
			return 0;
		}

		double k = c + 273.15;
		return k;
	}

	double ktoc(double k)
	{
		if(k < 0)
		{
			return -273.15;
		}

		double c = k - 273.15;
		return c;
	}
};
