#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	string word;
	int upper=0, lower=0;
	cin >> word;
	for (int i = 0; i < word.length(); i++)
		if (isupper(word[i])) upper++;
		else if (islower(word[i])) lower++;
	
	if (upper > lower)
		for (int i=0; i < word.length(); i++)
			word[i] = toupper(word[i]);
	else if (upper < lower)
		for (int i=0; i < word.length(); i++)
			word[i] = tolower(word[i]);
	else 
		for (int i=0; i < word.length(); i++)
			word[i] = tolower(word[i]);
	cout << word;
	return 0;
}
