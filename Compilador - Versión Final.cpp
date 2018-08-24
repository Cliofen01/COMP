
//Librerias
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

// Declaracion de funciones
void LimpiarArreglo (int *orden);

bool EsLetra(char *c, char caracter, int& var);

bool EsNumero(char *n, char caracter);

int main()
{
	//Declaración de variables
    string cadena;
    char n[]={'0','1','2','3','4','5','6','7','8','9'};
    char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int var1;
    int total;
    int orden[26];
    bool sinerrores;
    bool salir = false;
    
	do
	{
		// Definiendo valores iniciales para variables
	    sinerrores = true;
	    LimpiarArreglo(orden);
	    total = 0;
	    
	    cout<<"\n\n";
		cout<<"Introduzca la cadena que se desea trabajar. Escriba \"s\" para salir \n";
		getline(cin, cadena);
		
		if(cadena.length() == 0)
		{
			// Si la cadena esta vacia entonces se pido al usuario que introduzca otro.
			sinerrores = false;
			cout<<"No ha introducido nada aun...\n";
			cout<<"Presione cualquier tecla para continuar...\n";
			getchar();
		}
		else if(cadena == "s")
		{
			// Para salir del programa
			salir = true;
			cout<<"Saliendo del programa...";
		}
		else
		{
			for(int i = 0; i<cadena.length() ; i++)
			{
				/* El primer if usa la funcion EsLetra y revisa si el caracter es letra.
				 * El segundo if para los numeros.
				 * El tercer if si es un espacio.
				 * El cuarto if para caracteres que el compilador no reconoce. 
				 */
				
				if(EsLetra(c, cadena[i],var1)) {
					orden[var1]++;
					cout<<cadena[i]<<" es una letra\n";
				}
			
				else if(EsNumero(n, cadena[i])) {
					cout<<cadena[i]<<" es un numero\n";
					total = total + cadena[i] - '0';
				}
			
				else if((cadena[i] == ' ') || (cadena[i] == '\n'))
				{
					cout<<"espacio\n";
				}
				
				else
				{
					cout<<"Error, \'"<<cadena[i]<<"\' no es un caracter valido\n";
					cout<<"Introduzca una cadena valida\n";
					cout<<"Presione cualquier tecla para continuar....\n";
					sinerrores = false;
					getchar();
					break;
				}
				
			} 
			
		}
		
		if(sinerrores&&(!salir)) {
			// Muestra el total de los numeros introducidos y las letras ordenadas.
			cout<<"El total de la suma de los numeros es = "<<total<<"\n";
		    cout<<"\n";
		    cout<<"Letras en orden alfabetico\n";
		    
		    for(int cont1 = 1;cont1<26;cont1++)
		    {
		        while(orden[cont1]>0)
		        {
		             cout<<"   "<<c[cont1]<<"\n";
		             orden[cont1] = orden[cont1] - 1;
		        }
		    }
		    
		    cout<<"Presione cualquier tecla para continuar...\n";
		    getchar();
	 
		}
		
	}while(!salir);
	
    return 0;
}

// Definicion de funciones declaradas anteriormente

void LimpiarArreglo (int *orden){
	for (int cont = 0; cont<26;cont++)
    {
        orden[cont] = 0;
    }
}

bool EsLetra(char *c, char caracter, int& var) {
	for (int x = 0; x< 27; x++)
	{
		if(caracter == c[x])
    		{
    			var = x;
	    		return true;
			}
	}
	return false;
}

bool EsNumero(char *n, char caracter) {
	for (int var = 0; var< 10; var++)
	{
		if(caracter == n[var])
    		{
	    		return true;
			}
	}
	return false;
}


