#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string temp;
	vector<string> words;
	vector<string> badWords;

	badWords.push_back("cunt");
	badWords.push_back("shit");
	badWords.push_back("fuck");

	cout << "Enter words:";

	while(cin >> temp)
	{
		words.push_back(temp);
	}

	//sort(words.begin(), words.end());

	for(int i = 0; i < words.size(); ++i)
	{
		for(int j = 0; j < badWords.size(); ++j)
		{

			if(words[i] == badWords[j])
			{
				words[i] = "BLEEP";
			}
		}
		cout << words[i] << endl;
	}

	return 0;
}
