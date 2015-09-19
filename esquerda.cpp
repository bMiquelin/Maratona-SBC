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
	string str;
	int dir, num;
	cin >> num;
	while (num != 0)
	{
		cin >> str;
		dir = 0;
		for (unsigned i = 0; i < str.length(); ++i) str.at(i) == 'D' ? dir++ : dir+= 3;
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
		cin >> num;
	}
}
