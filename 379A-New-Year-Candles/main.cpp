#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a, b, ans=0;
	scanf("%d %d", &a, &b);
	
	if (b>a)
		cout << a << endl;
	else 
	{
		ans = 0;
		while (a>0)
		{
			if (a>=b)
			{
				a=a-b+1;
				ans=ans+b;
			}
			else 
			{
				ans += a;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}