#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
 
using namespace std;
 
void pausa();
 
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
    for (int cont = 0; cont<26;cont++)
    {
        orden[cont] = 0;    
    }
    cout<<"Introduzca algo: ";
    cin>>cadena;
    cout<<cadena<<"\n";
	
    bool bandera=false;
    char tecla;
 
    do
    {
        system("cls");
        cin.clear();
        cout << " " << endl;
        cout << "Programa sobre compiladores" << endl << endl;
        cout << "\t1. Declaraciones " << endl;
        cout << "\t2. Suma de valores " << endl;
        cout << "\t3. Ordenamiento " << endl;
        cout << "\t4. Cambiar variables " << endl;
        cout << "\t5. Salir " << endl << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				system("cls");
				cout << ".\n";
				
				    for(int i = 0;i<=cadena.length();i++)
    {
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
		
	}			
	pausa();
	break;
 
			case '2':
				system("cls");
				
				cout<<"El total de la suma de los numeros es = "<<total<<"\n\n";
    
    for(int cont1 = 0;cont1<26;cont1++)
    {
        while(orden[cont1]>0)
        {
             cout<<c[cont1]<<"\n";    
             orden[cont1] = orden[cont1] - 1;  
         }
    }
				cout << ".\n";
				pausa();
				break;
 
			case '3':
				system("cls");
				cout << ".\n";
				
				{

    string aux=" ";

    cout<<"Su palabra es..."<<endl;
    cout<<cadena<<endl;

    for(int i=0;i<cadena.size();i++)
    {
        for(int j=0;j<(cadena.size() - 1);j++)
            if (cadena[j]>cadena[j+1])
        {
            aux[0]=cadena[j];
            cadena[j]=cadena[j+1];
            cadena[j+1]=aux[0];
        }
    }
    cout<<endl;
    cout<<cadena<<endl;


    cout<<endl<<endl;
    }
				
				pausa();
				break;
 

 
 				case '4':
				system("cls");
				cout << ".\n";
				cout<<"ingrese las letras que desee..."<<endl;
   				cin>>cadena;
    			cout<<"Su palabra es..."<<endl;
    			cout<<cadena<<endl;
				pausa();
				break;
				
				case '5':
				bandera=true;
				//exit(1);
				break;
				
			default:
				system("cls");
				cout << ".\a\n";
				pausa();
				break;
		}
    }while(bandera!=true);
 
    return 0;
}
 
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}

