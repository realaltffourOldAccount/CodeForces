#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	vector<int> input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		input.push_back(x);
	}
	
	sort(input.begin(), input.end());
	
	for (int i = 0; i < input.size(); i++)
		cout << input[i] << " ";
	return 0;
}
