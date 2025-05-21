//Programa que despliege un menu y registre caracteres en una pila
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo
{
	char dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&,char &);

int main()
{
	Nodo *pila = NULL;
	char dato;
	char respuesta;
	int x=0,y=0;
	
	cout<<"Desea agregar un caracter a la pila?\n1)Si\t2)No"<<endl;
	cin>>y;
	do
	{
		system("CLS");
		
		switch(y)
		{
			case 1:
				cout<<"Digite un caracter(solo se registrara el primer caracter ingresado): ";
				cin>>dato;
				agregarPila(pila, dato);
				break;
			
			case 2:
				//Imprimir
				cout<<"\nMostrando los elementos de la pila(Del mas reciente al mas antiguo): ";
				while(pila != NULL)
				{                                        //Mientras no sea el final de la pila
					sacarPila(pila,dato);
					if(pila != NULL)
					{                                       //si hay mas elementos en la pila, imprime ese dato.
						cout<<dato<<" , ";
					}
					else
					{
						cout<<dato<<".";                                    //Ya hemos sacado todos los elementos de la pila, imprime un punto.
					}
				}
				break;	
		}
		
		cout<<"\nQue desea realizar ahora?\n1)Registrar un caracter\t2)Imprimir un caracter\t3)Salir\n"<<endl;
		cin>>y;
		if(y==3)
			x=1;
	}while(x != 1);
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila,char n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente";
}
void sacarPila(Nodo *&pila, char &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
