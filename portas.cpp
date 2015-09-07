#include "stdafx.h"
#include <iostream>
#include <string>



using namespace std;

int main()
{
	while (true)
	{
		int N;
		int c = 1;
		cin >> N;
		if (N == 0) break;
		for (int i = 1; i <= N; i += c)
		{
			c += 2;
			cout << i << " ";
		}
		cout << endl;
	}	
}

