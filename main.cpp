#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

void LimpiarArreglo (int orden[]);

bool EsLetra(char c[], char caracter);

bool EsNumero(char n[], char caracter); 

int main()
{
    string cadena;
    char n[]={'0','1','2','3','4','5','6','7','8','9'};
    char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char esp = ' ';
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int total = 0;
    int orden[25];
    
    LimpiarArreglo(orden);
    cout<<"Introduzca algo:\n";
    getline(cin, cadena);
    
    for(int i = 0;i<=cadena.length();i++)
    {
    	/*
		var1 = 0;
    	while (var1<26)
    	{
    		if(cadena[i] == c[var1])
    		{
	    		cout<<cadena[i]<<" es una letra\n";
	    		orden[var1]++;
				break;
			}
			else
			{
				var1++;
			}
			
		}
		
		var2 = 0;
		
		while (var2<10&&var1!=27)
    	{
            
    		if(cadena[i] == n[var2])
    		{
	    		cout<<cadena[i]<<" es un numero\n";
	    		total = total + cadena[i]-'0'; 
				break;
			}
			else
			{
				var2++;	
			}
			
		}
		
		if(cadena[i] == " ")
		{
			
		}
		
		*/
		
		if(EsLetra(c, cadena[i])) {
			cout<<cadena[i]<<" es una letra\n";
			orden[var1]++;
		}
		
		else if(EsNumero(n, cadena[i])) {
			cout<<cadena[i]<<" es un numero\n";
			total = total + cadena[i] - '0'; 
		}
	
		else if(isspace(cadena[i]))
		{
			cout<<"espacio\n";
		}
		
		else
		{
			cout<<"Error, \'"<<cadena[i]<<"\' no es un caracter valido\n";
			break;
		}
		
	}
	
    cout<<"El total de la suma de los numeros es = "<<total;
    cout<<"\n";
    cout<<"\n";
    cout<<"Letras en orden alfabetico\n";
    
    for(int cont1 = 0;cont1<26;cont1++)
    {
        while(orden[cont1]>0)
        {
             cout<<"   "<<c[cont1]<<"\n";    
             orden[cont1] = orden[cont1] - 1;  
         }
    }
    
    return 0;
}

void LimpiarArreglo (int orden[]){
	for (int cont = 0; cont<26;cont++)
    {
        orden[cont] = 0;    
    }
	
}

bool EsLetra(char c[], char caracter) {
	for (int var1 = 0; var1< 26; var1++)
	{
		if(caracter == c[var1])
    		{
	    		return true;
			}
	}
	return false;
}

bool EsNumero(char n[], char caracter) {
	for (int var1 = 0; var1< 10; var1++)
	{
		if(caracter == n[var1])
    		{
	    		return true;
			}
	}
	return false;
}



