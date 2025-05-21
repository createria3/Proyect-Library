#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void pedirDatos();
void comprobar(struct Tiempo *);


struct Tiempo
{
	int horas;
	int minutos;
	int segundos;
}tiempo[3], *puntero_tiempo = tiempo;


int main()
{
	pedirDatos();
	comprobar(puntero_tiempo);
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Ingrese 3 tiempos";
	for(int i=0; i<3; i++)
	{
		fflush(stdin);
		
		cout<<"\nIngrese la(s) hora(s):\t";
		cin>>(puntero_tiempo+i)->horas;
		cout<<"\nIngrese el(los) minuto(s):\t";
		cin>>(puntero_tiempo+i)->minutos;
		cout<<"\nIngrese el(los) segundo(s):\t";
		cin>>(puntero_tiempo+i)->segundos;
	}
}


void comprobar(Tiempo *puntero_tiempo)
{	
	int horasT=0;
	int minutosT=0;
	int segundosT=0;
	int i=0;
	
	for(int i=0; i<3; i++)
	{
		horasT += (puntero_tiempo+i)->horas; 
		minutosT += (puntero_tiempo+i)->minutos;
		if(minutosT >= 60)
		{
			minutosT -= 60;
			horasT++;
		}
		
		segundosT += (puntero_tiempo+i)->segundos;
		if(segundosT >= 60)
		{                                           
			segundosT -= 60;                                          
			minutosT++;
		}
	}
	
	cout<<"\n===================================================\n";
	cout<<"Horas: "<<horasT;
	cout<<"\nMinutos: "<<minutosT;
	cout<<"\nSegundos: "<<segundosT;
	cout<<"\n===================================================";
}
