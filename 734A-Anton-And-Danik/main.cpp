#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	int d=0,a=0;
	int n;
	string str;
	cin >> n;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == 'D') d++;
		else a++;
	
	if (d > a)
		cout << "Danik";
	else if (d < a) cout << "Anton";
	else cout << "Friendship";
	return 0;
}
