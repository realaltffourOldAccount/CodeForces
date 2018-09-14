#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	int n, h, w=0;
	cin >> n >> h;
	vector<int> v(n);
	for (int i=0; i<n;i++) cin >> v[i];
	for (int i = 0;i < n; i++)
		if (v[i]>h)
			w+=2;
		else w++;
	cout << w;
	return 0;
}
