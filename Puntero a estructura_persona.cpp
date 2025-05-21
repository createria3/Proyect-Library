//Puntero a estructura
#include<iostream>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;


void pedirDatos();
void mostrarDatos(Persona *);



int main()
{
	pedirDatos();
	mostrarDatos(puntero_persona);
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Ingrese su nombre: ";
				//El puntero_persona apunta al struct(nombre)
	cin.getline(puntero_persona->nombre,30,'\n');
	
	cout<<"Ingrese su edad: ";
	cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona)
{
	cout<<"Su nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"Su nombre es: "<<puntero_persona->edad<<endl;
}
