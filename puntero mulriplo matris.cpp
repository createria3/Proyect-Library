//Suma de dos matrices, debe coincidir i=fila; j=columna
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int m,n,f,c,i,j,k,x;
	
	float matriz3[100][100];
	int **puntero_matriz,**puntero_matriz2;
	
	
	//Despliegue de menu
	cout<<"\n================================================\n";
	cout<<"\nINGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ\n";
	cin>>m;
	cin>>n;
	cout<<"\n================================================\n";
	cout<<"\nINGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ\n";
	cin>>f;
	cin>>c;
	cout<<"\n";
	
	
	
	if(n==f)
	{
		
		cout<<"\n================================================\n";
		cout<<"INGRESE EL VALOR DE LA PRIMERA MATRIZ\n\n";
		//INGRESE LAS MATRICES
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			{
				cout<<"Inserte otro valor= ";
				cin>>puntero_matriz[i][j];
			}
		cout<<"\n";
		cout<<"\n================================================\n";
		cout<<"\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ\n\n";
		for(i=1;i<=f;i++)
			for(j=1;j<=c;j++)
			{
				cout<<"Inserte otro valor= ";
				cin>>puntero_matriz2[i][j];
    		}
			//OPERACION DE MULTIPLICACION
		for (i=1;i<=m;i++)
    	{
			for (j=1;j<=c;j++)
			{
				matriz3[i][j]=0;
         		for(k=1;k<=n;k++)
          		{
					matriz3[i][j]=matriz3[i][j]+matriz1[i][k]*matriz2[k][j];
        		}
       		}
    	}
 		cout<<"\n================================================\n";
 		cout<<"\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n";
		//IMPRESION
  		for(i=1;i<=m;i++)
			for(j=1;j<=c;j++)
    		{
    			cout<<"|";
				cout<<matriz3[i][j];
				cout<<"|";
			}
			
    	cout<<"\n";
	}
	else
	{
		cout<<"\n===================================================\n	No se puede ejecutar, las matricez no son multiplicables...";
	}
	getch();
}
