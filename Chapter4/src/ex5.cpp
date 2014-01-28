#ifndef EX5
#define EX5
#include <iostream>
using namespace std;


class Ex5
{
public:

	void Calculator()
	{
		double operand1;
		double operand2;
		char operatorIn;

		cout << "Enter the calculation" << endl;
		cin >> operand1;
		cin >> operand2;
		cin >> operatorIn;

		switch(operatorIn)
		{
		case '+':
			cout << "Addition: " << operand1 + operand2 << endl;
			break;
		case '-':
			cout << "Subtraction: " << operand1 - operand2 << endl;
			break;
		case '/':
			cout << "Division: " << operand1 / operand2 << endl;
			break;
		case '*':
			cout << "Multiplication: " << operand1 * operand2 << endl;
			break;
		default:
			cout << "Does not compute" << endl;
		}

	}
};
#endif
