#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, m, ans=0;
	cin >> n >> m;
	ans = n + n/(m-1);
	if (n%(m-1)==0)
		ans -= 1;
	cout << ans;
	return 0;
}
