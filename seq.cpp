#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int matriz[9][9];

int submat(int l0, int c0, int l, int c, int i, int j)
{
	return matriz[l0+i][c0+j];
}
int prox(int l0, int c0, int l, int c, int i, int j)
{
	return matriz[l0+i+((j==c-1)?1:0)][c0+((j==c-1)?0:j+1)];
}
bool esc(int l0, int c0, int l, int c)
{
	if (submat(l0, c0, l, c, 0, 0) > prox(l0, c0, l, c, 0, 0))
	{
		return false;
	}
	for (int con=1;con<=l*c-1;con++)
	{
		for (int con2=0;con2<=l*c-1;con2++)
		{
			if 
		}
	}
	return true;
}

int main()
{
	int index = 0;
	int tamX = 9, tamY = 9;
	
	//Seta valores
	for (unsigned i = 0; i<10;i++)
	{
		for (unsigned j = 0; j<10;j++)
		{
			matriz[i][j] = rand() % 10; //i*10+j;
			//printf("%d%s", matriz[i][j])
			cout << matriz[i][j] << " " << ((j==9)?"\n":"");
		}	
		
	}
	//cout << prox(4, 2, 4, 6, 1, 5);

	cout << "Valor: " << esc(0, 0, 2, 2);
	
	
	
	
	
	
	
	/*
	int maximo;
	
	for (int i=9;i>1;i--)
	{
		for(int j=0;j<8;j++)
		{
			if(matriz[i][j] < matriz[i][j+1])
			{
				if(matriz[i-1][j] < matriz[i-1][j+1] &&  matriz[i-1][j+1] < matriz[i][j])
				{
					//cout << "!" << i << endl;
				}
			}
		}
	}
	*/
	
}
