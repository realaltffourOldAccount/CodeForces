#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	string str1,str2,str3,str4;
	bool isThere = true;
	cin >> str1 >> str2 >> str3;
	
	str4 = str1 + str2;
	
	sort(str4.begin(), str4.end());
	sort(str3.begin(), str3.end());
	
	if (str4 == str3)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
