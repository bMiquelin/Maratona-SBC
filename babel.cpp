#include <iostream>
using namespace std;
int main()
{
	struct palavra{
		string origem;
		string destino;
		string conteudo;
	};
	
	palavra p[2000];
	int qt1, contador=0;
	string str, origem, destino;
	char letra;
	
	cin >> qt1;
	while ( qt1 > 0 )
	{
		cin >> origem >> destino;
		for (unsigned i = 0;i<qt1;i++)
		{			
			cin >> p[i].origem >> p[i].destino >> p[i].conteudo;
		}
		
		for (unsigned i=0;i<=1999;i++)
		{			
			//CHECK SE CHEGOU NO FIM
			if (p[i].destino == destino)
			{
				contador += p[i].conteudo.length();
				cout << "FIM: " << contador;
				break;
			}
			//BUSCA PALAVRA ACEITÁVEL
			else if (p[i].origem == origem && p[i].conteudo.at(0) != letra)
			{
				origem = p[i].destino;
				contador += p[i].conteudo.length();
				letra = p[i].conteudo.at(0);
			}
			//NÃO ENCONTROU
			else if(i == 1999)
			{
				cout << "impossivel" << endl;
				break;
			}
		}		
		cin >> qt1;				
	}	
}
