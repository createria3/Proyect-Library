#include<iostream>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//Librerias


struct Persona
{//Declaramos una estrucura de nombre de persona

	char Nombre[40];//Definimos la variable Nombre tipo char, dentro de una estructura se llama campo
	
	int Edad;		//Definimos el campo llamado edad
}P1;				//Aqui definimos la variable con la que accedemos a "Nombre" y "Edad"

//Prototipo funciones de usuario
void PedirDatos();
void MostrarDatos(Persona);

int main()
{
	PedirDatos();
	
	MostrarDatos(P1);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Ingrese su nombre:";
	cin.getline(P1.Nombre,40	/*Cantidad de caracteres*/,'\n'/*La linea termina en el monmento que alguien presiona enter*/);
	cout<<"Ingrese su edad:";
	cin>>P1.Edad;/*Aqui no es necesario "getline" ya que no es char*/
}

void MostrarDatos(Persona	P/*Aqui referenciamos persona como "P", este es alterable, puedes llamarlo como sea*/)
{
	cout<<"Nombre: "<<P.Nombre<<endl;
	cout<<"Edad: "<<P.Edad<<endl;
}
