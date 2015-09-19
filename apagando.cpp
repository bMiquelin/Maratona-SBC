#include <iostream>
using namespace std;
int main()
{
	int qt1, qt2, val, c=0;
	string str;
	cin >> qt1 >> qt2;	
	while ( ( qt1 > 0 ) && ( qt2 > 0 ) )
	{
		cin >> str;
		while (qt2 > 0)
			for (unsigned i = 0; i <= str.length()-1; i++) 
				if (i == str.length() - 1)
				{
					for (int j = str.length()-1; i >= 0; i--) 
					{
						str.erase(i, 1);	
						qt2--;
						break;					
					}
				}
				else if (str.at(i) < str.at(i+1))
				{
					str.erase(i, 1);
					qt2--;
					break;
				}	
			cout << str << endl;
			cin >> qt1 >> qt2;
	}	
}
