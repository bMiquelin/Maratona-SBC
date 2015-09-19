#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N != 0)
	{
		int c = 1;
		if (N == 0) break;
		for (int i = 1; i <= N; i += c)
		{
			c += 2;
			cout << i << " ";
		}
		cout << endl;
		cin >> N;
	}	
}
