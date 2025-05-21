//Hacer un programa que guarde los datos de un cliente de banco, los almacene en cola y los muestre en el orden correcto
//Falta pulir programa(guradar multiples contactos)
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


struct Cliente{
	char nombre[30];
	char clave[15];
	int edad;
	
};
struct Nodo{
	Cliente c;
	Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, Cliente);
void guardarCliente(Cliente &);
bool ColaVacia(Nodo *);


int main()
{
	system("CLS");
	Nodo *Frente = NULL;
	Nodo *Fin = NULL;
	char respuesta;
	int x=0;
	Cliente c;
	
	do
	{
		cout<<"Desea ingresar un cliente? Si /No\n";
		cin>>respuesta;
		switch(respuesta)
		{
			case 's':
				insertarCola(Frente, Fin, c);
				guardarCliente(c);
				break;
			case 'n':
				cout<<"\nTerminando el programa...";
				x=1;
		}
		
	}while(x==0);
	
	cout<<"Nombre: "<<c.nombre;
	cout<<"\nEdad: "<<c.edad;
	cout<<"\nClave: "<<c.clave;
	
	getch();
	return 0;
}



void insertarCola(Nodo *&Frente, Nodo *&Fin, Cliente c)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->c = c;
	nuevo_nodo->siguiente = NULL;
}
bool ColaVacia(Nodo *Frente)
{
	if(Frente == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void guardarCliente(Cliente &c)
{
	fflush(stdin);
	cout<<"\tAgregando un Nuevo Cliente"<<endl;
	
	cout<<"Ingrese nombre: ";
	cin.getline(c.nombre, 30, '\n');
	cout<<"Ingrese clave: ";
	cin.getline(c.clave, 15, '\n');
	cout<<"Ingrese edad: ";
	cin>>c.edad;
	
	
}


