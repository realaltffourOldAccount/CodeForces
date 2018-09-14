#include <iostream>
#include <set>
using namespace std;
int main(int argc, char **argv)
{
	int n, x,y;
	cin >> n;
	set<int> myset;
	for (int i = 0; i < 2; i++)
	{
		cin >> x;
		for (int j = 0; j < x; j++)
		{
			cin >> y;
			myset.insert(y);
		}
	}
	if (myset.size()==n)
		cout << "I became the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;
	return 0;
}
