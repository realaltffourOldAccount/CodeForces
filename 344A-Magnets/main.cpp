#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n, counter=0;
	cin >> n;
	
	char s[3], c('\0');
	while (n--)
	{
		cin >> s;
		if (s[0] != c)
			counter++;
		c = s[0];
	}
	cout << counter;
	return 0;
}
