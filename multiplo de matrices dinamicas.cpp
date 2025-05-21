//En este programa se multiplican los valores de 2 matrices//
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	system("CLS");
	int **puntero_matriz1;
	int **puntero_matriz2;
	int matriz3[10][10];
	int i,x,j;
	int nColumnas=0;
	int nFilas=0;

	//Preguntar tamaño de matriz//
	cout<<"Inserte la altura de la matriz:\t";
	cin>>nColumnas;
	cout<<"\nInserte la longitud de la matriz:\t";
	cin>>nFilas;
	
	
	for(i=0; i<nColumnas; i++)
	{
		for(j=0; j<nFilas; j++)
		{
			cout<<"\nIngresa un valor:\t";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	

	
	cout<<"\n\nInserta la segunda matriz:\t";
	for(i=0; i<nColumnas; i++)
	{
		for(j=0; j<nFilas; j++)
		{
			cout<<"\nIngresa un valor:\t";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
	
	//multiplicacion de matrices//
	for(i=0; i<nColumnas; i++)
	{
		for(j=0; j<nFilas; j++)
	}
	
	
	cout<<"La multiplicacion es:\n";
	for(i=0; i<nFilas; i++)
	{
		for(j=0; j<nColumnas; j++)
		{
			cout<<"||"<<matriz3[i][j]<<"||";
		}
		cout<<"\n";
	}
}
