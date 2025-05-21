#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void pedirDatos();
int suma(int **,int **,int,int);
void imprimir();

int **puntero_matriz,**puntero_matriz2,nFilas,nColumnas,nFilaS,nColumnaS;
int i,j;

int main()
{
	pedirDatos();
	suma(puntero_matriz,puntero_matriz2,nFilas,nColumnas);
	imprimir();
	
	for(int i=0; i<nFilas; i++)
		delete[] puntero_matriz[i];
	
	delete[] puntero_matriz;
	
	for(int i=0; i<nFilas; i++)
		delete[] puntero_matriz2[i];
	
	delete[] puntero_matriz2;
}

void pedirDatos()
{
	cout<<"Digite el numero de filas de la primera matriz: ";
	cin>>nFilas>>nColumnas;
	
	puntero_matriz = new int*[nFilas];
	for(int i=0; i<nFilas;i++){
		puntero_matriz[i] = new int[nColumnas];
	}
	cout<<"\nDigitando los elementos de la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			cout<<"Digite un numero:\t";
			cin>>*(*(puntero_matriz+i)+j);	
		}
	}
	
	cout<<"Digite el numero de filas y columnas de la segunda matriz: ";
	cin>>nFilaS>>nColumnaS;
	
	puntero_matriz2 = new int*[nFilaS];
	for(int i=0; i<nFilas;i++){
		puntero_matriz2[i] = new int[nColumnaS];
	}
	for(int i=0;i<nFilaS;i++){
		for(int j=0;j<nColumnaS;j++){
			cout<<"Digite un numero:\t";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
}

int suma(int **puntero_matriz, int **puntero_matriz2,int nFilas,int nColumnas){
	for(i=0; i<nFilas; i++){
		for(j=0; j<nColumnas; j++){
			*(*(puntero_matriz+i)+j) += *(*(puntero_matriz2+i)+j);
		}
	}
}

void imprimir(){
	cout<<"\n\nImprimiendo Matriz:\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			cout<<*(*(puntero_matriz+i)+j)<<"|";	//puntero_matriz[i][j]
		}
		cout<<"\n";
	}
}
