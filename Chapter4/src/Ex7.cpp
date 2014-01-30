#ifndef EX6
#define EX6
#include <iostream>
#include <vector>
using namespace std;

class Ex7
{
private:
	vector<string> vecNums;
	void InitialiseNumbers()
	{
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
	}

	int GetNumber()
	{
		int num;

		string strNum;
		if(cin >> num)
		{
			return num;
		}
		cin.clear();
		cin >> strNum;

		for(int i = 0; i < 10; ++i)
		{
			if(vecNums[i] == strNum)
			{
				return i;
			}
		}

		return 0;

	}
public:
	void Calculator()
	{
		InitialiseNumbers();
		double num1;
		double num2;
		char operatorIn;

		num1 = GetNumber();
		num2 = GetNumber();

		cin >> operatorIn;

		switch(operatorIn)
		{
		case '+':
			cout << "Addition: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "Subtraction: " << num1 - num2 << endl;
			break;
		case '/':
			cout << "Division: " << num1 / num2 << endl;
			break;
		case '*':
			cout << "Multiplication: " << num1 * num2 << endl;
			break;
		default:
			cout << "Does not compute" << endl;
		}
	}
};

#endif
