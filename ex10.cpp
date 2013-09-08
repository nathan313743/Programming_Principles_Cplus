#include <iostream>
using namespace std;

int main()
{
  double num1;
  double num2;
  char operation;

  cin >> operation >> num1 >> num2;

  if(operation == '+')
  {
    cout << num1 + num2 << endl;
  }
  else if(operation = '-')
  {
    cout << num1 - num2 << endl;
  }

  return 0;
}
