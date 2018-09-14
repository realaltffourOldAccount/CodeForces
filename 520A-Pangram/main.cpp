#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<bool> alph(28,0);
	for (int i = 0; i < n; i++)
		alph[tolower(s[i])-'a'] = 1;
	for (int i = 0; i < 26; i++)
	{
		if (!alph[i])
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
