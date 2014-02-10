#ifndef EX10
#define EX10
#include <iostream>
#include <vector>
using namespace std;

class Ex10
{
public:
	void Go()
	{
		vector<int> vecNums;
		vecNums.push_back(2);

		// Get all our test numbers.
		for(int i = 3; i < 100; ++i)
		{
			if(i % 2 == 1)
			{
				vecNums.push_back(i);
			}
		}

		cout << "Numbers filled" << endl;

		// Loop through dividing numbers
		for(int i = 0; i < vecNums.size(); ++i)
		{
			if(vecNums[i] == -1)
			{
				continue;
			}
			for(int j = i+1; j < vecNums.size(); ++j)
			{
				if(vecNums[j] % vecNums[i] == 0 && vecNums[j] != -1)
				{
					//cout << "i " << vecNums[i] << endl;
					//cout << "j " << vecNums[j] << endl;
					//not a prime
					vecNums[j] = -1;
				}
			}
		}

		cout << "Primes found" << endl;

		for(int i = 0; i < vecNums.size(); ++i)
		{
			if(vecNums[i] != -1)
			{
				cout << vecNums[i] << endl;
			}
		}
	}
};

#endif
