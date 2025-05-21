#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo
{
	int Dato;
	Nodo *Siguiente;
};

void AgregarPila(Nodo *&, int);
void SacarPila(Nodo *&, int &);

int main()
{
	Nodo *Pila = NULL;
	int dato;
	char respuesta;
	
	do
	{
		cout<<"Ingrese un numero: ";
		cin>>dato;
		AgregarPila(Pila,dato);
		
		cout<<"\nDesea agregar otro numero a la pila?";
		cin>>respuesta;
	}while((respuesta == 's')||(respuesta=='S'));
	
	cout<<"Mostrando elementos de la pila: ";
	while(Pila !=NULL)
	{
		SacarPila(Pila,dato);
		
		if(Pila !=NULL)
		{
			cout<<"dato;"<<" , ";
		}
	}
	
	getch();
	return 0;
}

void AgregarPila(Nodo *&Pila, int n)
{
	Nodo *Nuevo_Nodo = new Nodo();	//Creamos espacio en memoria para almacenar el Nodo
	Nuevo_Nodo->Dato = n;			//Almacenamos en el Nodo el valor que el usuario ingresa
	Nuevo_Nodo->Siguiente = Pila;	//Cargar el puntero pila dentro del nodo siguiente
	Pila = Nuevo_Nodo;				//Signar el nuevo nodo a pila
	
	cout<<"\nEl numero "<<n<<" ha sido agregado a pila correctamente";
}

void SacarPila(Nodo *&Pila, int &n)
{
	Nodo *aux = Pila;
	n = aux->Dato;
	Pila = aux -> Siguiente;
		delete aux;
}
