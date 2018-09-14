#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	string str1,str2,res="";
	cin >> str1;
	cin >> str2;	
	for (int i = 0; i < str1.length(); i++)
		if (str1[i]!=str2[i])
			res+="1";
		else res+="0";
	cout << res;
	return 0;
}
