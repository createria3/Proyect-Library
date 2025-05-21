//En este programa se multiplican los valores de 2 matrices//
#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

int filasA, columnasA, filasB, columnasB;
int *puntero_matrizA = new int[filasA * columnasA];
int *puntero_matrizB = new int[filasB * columnasB];
int *puntero_resultado = new int[filasA * columnasB];
int j,i,z,resultado;

void pedirDatos(int*, int , int );
void multiplicarMatrices(int*, int* , int* , int , int, int);


int main()
{
    cout << "Ingrese el numero de filas de la matriz A: ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas de la matriz A: ";
    cin >> columnasA;
    cout << "Ingrese el numero de filas de la matriz B: ";
    cin >> filasB;
    cout << "Ingrese el numero de columnas de la matriz B: ";
    cin >> columnasB;

    

    cout<<"\n";
    pedirDatos(puntero_matrizA, filasA, columnasA);
    cout<<"\n";
    pedirDatos(puntero_matrizB, filasB, columnasB);
    cout<<"\n";

    multiplicarMatrices(puntero_matrizA, puntero_matrizB, resultado, filasA, columnasA, columnasB);

    imprimir(resultado, filasA, columnasB);

    for(i=0; i<filas;i++)
    {
    	for(j=0; j<columans; j++)
    	{
    		delete[] matrizA[i][j];
			delete[] matrizB[i][j];
			delete[] resultado;
		}
	}

    return 0;
}


void pedirDatos(int* matriz, int filas, int columnas)
{
    cout <<"Ingrese los elementos de la matriz:"<<endl;
    for (i = 0; i < filas; i++)
	{
        for (j = 0; j < columnas; j++)
		{
            cout<<"Espacio ["<<i<<"]["<<j<<"]: ";
            cin>>*(matriz + i * columnas + j);
        }
    }
}

void multiplicarMatrices(int* puntero_matrizA, int* puntero_matrizB, int* resultado, int filasA, int columnasA, int columnasB)
{
    for(i = 0; i<filasA; i++)
	{
        for (j=0; j < columnasB; j++)
		{
            *(resultado + i * columnasB + j) = 0;
            
            
            for (z = 0; z < columnasA; z++)
			{
                *(resultado + i * columnasB + j) += *(puntero_matrizA + i * columnasA + z) * *(puntero_matrizB + z * columnasB + j);
            }
        }
    }
}

void imprimir(int* matriz, int filas, int columnas)
{
    cout<<"La matriz es:"<<endl;
    for(i=0; i<filas; i++)
	{
        for(j=0; j<columnas; j++)
		{
            cout<<*(matriz + i * columnas + j)<< " ";
        }
        cout <<endl;
    }
}


