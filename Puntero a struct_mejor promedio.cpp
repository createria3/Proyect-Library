//Programa que calcule e imprima los datos del mejor de 3 estudiantes usando punteros y estructuras
#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Alumno
{
	char Nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void comprobar(struct Alumno *);

int main()
{
	pedirDatos();
	comprobar(puntero_alumno);
	
	getch();
	return 0;
}

void pedirDatos()
{
	for(int i=0; i<3; i++)
	{
		fflush(stdin);
		
		cout<<"Ingrese el nombre del estudiante ["<<i+1<<"]:\t";
		cin.getline((puntero_alumno+i)->Nombre,30,'\n');
		cout<<"Ingrese la edad del estudiante ["<<i+1<<"]:\t";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Ingrese el promedio del estudiante ["<<i+1<<"]:\t";
		cin>>(puntero_alumno+i)->promedio;
		
		
		
		cout<<"\n\n=============================================================\nNombre: "<<(puntero_alumno+i)->Nombre<<"\nEdad: "<<(puntero_alumno+i)->edad<<"\nPromedio: "<<(puntero_alumno+i)->promedio<<"\n=============================================================\n";
	}
	
	
	
}

void comprobar(Alumno *puntero_alumno)
{
	/*if((puntero_alumno+0)->promedio >> (puntero_alumno+1)->promedio)
	{
		if((puntero_alumno+0)->promedio>>(puntero_alumno+2)->promedio)
		{
			cout<<"\nEl primer estudiante es el mejor";
		}
		else
		{
			cout<<"\nEl tercer estudiante  es el mejor"
		}
	}*/
	int i=0;
	if ((puntero_alumno+1)->promedio > (puntero_alumno+0)->promedio) {
        (puntero_alumno+0)->promedio = (puntero_alumno+1)->promedio;
        (puntero_alumno+0)->edad = (puntero_alumno+1)->edad;
        
        i=1;
    }
    
    if ((puntero_alumno+2)->promedio > (puntero_alumno+0)->promedio) {
        (puntero_alumno+0)->promedio = (puntero_alumno+2)->promedio;
        (puntero_alumno+0)->edad = (puntero_alumno+1)->edad;
        
        i=2;
    }
    
    cout<<"\n\n=============================================================\nLa persona con promedio mas alto es:\n=============================================================\nNombre: "<<(puntero_alumno+i)->Nombre<<"\nEdad: "<<(puntero_alumno+i)->edad<<"\nPromedio: "<<(puntero_alumno+i)->promedio<<"\n=============================================================\n";;
}

//crissaorbelmont@gmail.com enviar a este correo
