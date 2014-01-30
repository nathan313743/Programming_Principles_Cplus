#ifndef EX9
#define EX9
#include <iostream>
#include <vector>
using namespace std;

class Ex9
{
public:
	void Go()
	{
		double rice = 1;
		double lastRice = 0;
		int squares = 1;
		try
		{
			for(; squares < 64; ++squares)
			{
				lastRice = rice;
				rice *= 2;
				if(rice < lastRice)
				{
					break;
				}
			}
		}
		catch(...)
		{
			cout << "Rice: " << rice << endl;
			cout << "Squares: "<<  squares << endl;
		}

		cout << "Rice: " << lastRice << endl;
		cout << "Squares: "<<  squares << endl;
	}
};

#endif
