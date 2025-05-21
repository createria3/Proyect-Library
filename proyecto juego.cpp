#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

// Declaración de funciones
void imp_tab(int tabla[5][8]);
void fill_tab_man(int tabla[5][8]);
void fill_tab(int tabla[5][8]);


// Programa principal
int main()
{
    system("CLS");
	int respuesta;
    int tabla[5][8];
    
    
		cout<<"Seleccione un metodo de llenado:\n 1)Manual\n 2)Auto";
	cin>>respuesta;
	
	switch (respuesta)
	{
		case 1:	fill_tab_man(tabla);	break;
		
		case 2:	fill_tab(tabla);	break;
	}
    
    
    
    imp_tab(tabla);
    getch();
    return 0;
}

void fill_tab(int tabla[5][8])
{
	
}
// Llena la tabla con valores ingresados por el usuario (de preferencia 0 o 1)
void fill_tab_man(int tabla[5][8])
{
	int check = 0;
	//ciclado
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
        	do //ciclo do while para mantener valores validos
        	{
        		//recompilacion de datos
		        cout << "\nIngresa un valor (0 o 1) para [" << i << "][" << j << "]: ";
    		    cin >> tabla[i][j];
                        
        		//verificar si los valores son dentro del rango 0-1
				if(tabla[i][j] <= 1)
				{
					switch (tabla[i][j])
			    	{
    					case '1':	cout<<"valor de 1";
            				break;
		        		case '0': 	cout<<"valor de 2";
    		    			break;
        		    }
        		    check = 1;
        		}
	            if(tabla[i][j] > 1)
				{
					cout<<"Dato no valido...";
				}
			} while (check == 0);
        }
    }
}

// Imprime la tabla usando caracteres según el valor
void imp_tab(int tabla[5][8])
{
    cout << "\nTablero:\n\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (tabla[i][j] == 1)
                cout << "[###]\t";
            else
                cout << "[OOO]\t";
        }
        cout << "\n\n";
    }
}

