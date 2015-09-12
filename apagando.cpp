#include <iostream>
#include <string>
using namespace std;

int main()
{
	int qt1, qt2, val, c=0;
	string str;
	cin >> qt1 >> qt2 >> str;
		
	for (unsigned i = 0; i <= qt2; i++) 
		if (str.at(i) - 48 > c)
		{
			c = str.at(i) - 48;
			val = i;
		}
		
	for(int v=qt2;v>=0;v--)
		if (v != val)
			str.erase(v, 1);
			
	cout << str;
	getchar();
}
