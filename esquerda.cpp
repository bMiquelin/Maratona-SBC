#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
/*
0 - N
1 - L
2 - S
3 - O
*/
int main()
{
	while (true)
	{
		int dir = 0;
		string str;
		cin >> str;
		for (unsigned i = 0; i < str.length(); ++i) str.at(i) = "D" ? dir++ : dir--;
		switch (dir % 4)
		{
		case 0:
			cout << "N";
			break;
		case 1:
			cout << "L";
			break;
		case 2:
			cout << "S";
			break;
		case 3:
			cout << "O";
			break;
		}
		cout << endl;
	}
}

