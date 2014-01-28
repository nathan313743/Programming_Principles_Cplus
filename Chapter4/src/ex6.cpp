#ifndef EX6
#define EX6
#include <iostream>
#include <vector>
using namespace std;
class Ex6
{
public:

	void  ToEnglish()
	{
		vector<string> vecNums;
		vecNums.push_back("zero");
		vecNums.push_back("one");
		vecNums.push_back("two");
		vecNums.push_back("three");
		vecNums.push_back("four");
		vecNums.push_back("five");
		vecNums.push_back("six");
		vecNums.push_back("seven");
		vecNums.push_back("eight");
		vecNums.push_back("nine");

		cout << "Enter number:";
		int num;
		while(cin >> num)
		{
			cout << vecNums[num] << endl;
			cout << "Enter number:";
		}
	}

};
#endif
