#include <iostream>
using namespace std;
int main()
{
	int start, segundo;
	int n, picos;
	int h1, h2, h3;
	cin >> n;
	
	
	while (n != 0)
	{		
		cin >> h1;
		cin >> h2;
		
		if (n == 2)
		{
			cout << 2 << endl;
			cin >> n;
			continue;
		}
		start = h1;
		segundo = h2;
		picos = 0;
		for (unsigned i = 3; i <= n; i++)
		{
			cin >> h3;
			if ((h2 > h1 && h2 > h3) || (h2 < h1 && h2 < h3))
				picos++;
			h1 = h2;
			h2 = h3;
		}
		if ((h2 > h1 && h2 > start) || (start > segundo && start > h2)) picos++;
		if ((h2 < h1 && h2 < start) || (start < segundo && start < h2)) picos++;		
		cout << picos << endl;
		cin >> n;
	}
}
