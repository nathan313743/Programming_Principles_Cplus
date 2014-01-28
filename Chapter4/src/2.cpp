//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//  vector<double> temperatures;
//  double temp;
//
//  while(cin >> temp)
//  {
//    temperatures.push_back(temp);
//  }
//
//  sort(temperatures.begin(), temperatures.end());
//
//
//  if(temperatures.size() % 2 == 1)
//  {
//    // it's odd number
//    cout << "Median: " << temperatures[temperatures.size() / 2] << endl;
//  }
//  else
//  {
//    //it's even
//    int size = temperatures.size();
//    double num1 = temperatures[size/2];
//    double num2 = temperatures[(size/2) -1];
//
//    cout << "Median: " << ((num1+num2) / 2) << endl;
//
//  }
//
//  return 0;
//}
