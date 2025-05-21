//Puntero a puntero
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int i, j;
	int a[5][5];	//matriz de dos dimensiones
	int *p[5];		//matriz de punteros
	int **q;		//puntero a puntero a un entero
	
	for(i=0; i<5;i++)
		p[i]=a[i];	//asignar a p las filas de a
	q=p;
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			cout<<"q["<<i<<"]["<<j<<"]: ";
			cin>>q[i][j];
		}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
			cout<<setw(7)<<q[i][j];
		cout<<endl;
	}
	
}
