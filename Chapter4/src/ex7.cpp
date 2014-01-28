#include <iostream>
using namespace std;

class Ex7
{
public:
	void StringSort()
	{	string str1, str2, str3, temp;
	  cout << "Please enter 3 strings" << endl;
	  cin >> str1;
	  cin >> str2;
	  cin >> str3;

	  for(int i = 0; i < 2; ++i)
	  {
	  if(str3 <= str2)
	  {
	    temp = str3;
	    str3 = str2;
	    str2 = temp;
	  }
	  if(str2 <= str1)
	  {
		  temp = str2;
	    str2 = str1;
	    str1 = temp;
	  }
	  }

	  cout << str1 << endl;
	  cout << str2 << endl;
	  cout << str3 << endl;
	}

};


