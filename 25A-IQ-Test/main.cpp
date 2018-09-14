#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, even(0), lastodd(0), lasteven(0);
	int x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x%2==0)
		{
			even++;
			lasteven=i;
		}
		else 
		{
			even--;
			lastodd=i;
		}
	}
	
	cout << (even > 0 ? lastodd : lasteven)+1 << endl;
	
	return 0;
}
