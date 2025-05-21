//Programa en donde se pregunten los datos del corredor y se le asigne una categoria, posteriormente imprimir todos sus datos
#include<iostream>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

//Corredor
char nombre[30];
char sexo[10];
char club[50];
int edad;


struct corredor
{
	char nombre[30];
	char sexo[10];
	char club[50];
	char categoria[20];
	long int edad;
}P1;

int main()

{
	cout<<"Ingrese todos sus datos...\n==============================================================================\n";
	cout<<"Nombre:\t";
	cin.getline(P1.nombre,30,'\n');
	cout<<"Sexo:\t";
	cin.getline(P1.sexo,10,'\n');
	cout<<"Club:\t";
	cin.getline(P1.club,50,'\n');
	cout<<"Edad:\t";
	cin>>P1.edad;
	cout<<"\n\n\n\n==============================================================================\n";
	
	cout<<"\nNombre:\t"<<P1.nombre;
	cout<<"\nSexo:\t"<<P1.sexo;
	cout<<"\nClub:\t"<<P1.club;
	cout<<"\nEdad:\t"<<P1.edad<<endl;
	
	if(P1.edad<=18)
	{
		cout<<"El corredor es juvenil...";
	}
	else
	{
		if(P1.edad<=40)
		{
			cout<<"El corredor es señor...";
			
		}
		else
		{
			cout<<"El corredor es veterano...";
		}
	}
	
	/*if(P1.edad<=18)
	{
		strcpy(categoria,"juvenil")
	}
	if(P1.edad<=40)
	{
		strcpy(categoria,"señor")
	}
		if(P1.edad>40)
	{
		strcpy(categoria,"veterano")
	}*/
}

