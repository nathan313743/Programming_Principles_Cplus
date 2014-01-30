#ifndef EX8
#define EX8
#include <iostream>
#include <vector>
using namespace std;

class Ex8
{
public:
	void Go()
	{
		int rice = 1;
		int squares = 1;

		for(; rice < 1000000000; ++squares)
		{
			rice *= 2;
		}

		cout << squares << endl;
	}
};

#endif
