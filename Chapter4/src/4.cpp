#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int foundNumber = 0;
  int userNum = 0;
  int numOfGuesses = 0;
  int endPoint = 100;
  int startPoint = 1;
  int midPoint = 50;
  int temp;
  bool numberGuessed;
  string in;
  
  cout << "Enter a number for me to guess" << endl;
  cin >> userNum;
  
  while(!numberGuessed)
  {
	  if(userNum == midPoint)
	  {
		  numberGuessed = true;
		  continue;
	  }
	  cout << "Is the number greater than " << midPoint << "?" << endl;
	  cin >> in;
	  
	  if(in =="y")
	  {
		startPoint = midPoint;
		temp = (endPoint - midPoint) / 2;
		midPoint = midPoint + temp;
	  }
	  else
	  {
		endPoint = midPoint;
		temp = (midPoint - startPoint) / 2;
		midPoint = midPoint - temp;
      }  
      ++numOfGuesses;
	  
  }
  
  cout << "Your number is :" << midPoint << endl;
  cout << "Number of guesses :" << midPoint << endl;
  
  
  
  //if(userNum >= midPoint /*50*/)
  //{
	  
	  //temp = (endPoint - midPoint) / 2;
	  //midPoint = midPoint + temp;
	  
	  //if(userNum >= midPoint /*75*/)
	  //{
		//temp = (endPoint - midPoint) / 2;
		//midPoint = midPoint + temp;
	  //}
	  
  //}


  return 0;
}
