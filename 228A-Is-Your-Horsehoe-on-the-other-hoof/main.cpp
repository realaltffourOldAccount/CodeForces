#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	long int a,b,c,d;
	cin >> a >> b >> c >> d;
	list<long int> li;
	li.push_back((a));
	li.push_back((b));
	li.push_back((c));
	li.push_back((d));
	li.sort();
	li.unique();
	cout << 4-li.size();
	return 0;
}
