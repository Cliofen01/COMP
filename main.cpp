#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    string cadena;
    //int a;
    char n[]={'0','1','2','3','4','5','6','7','8','9'};
    char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char esp = ' ';
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    
    cout<<"Introduzca algo: ";
    cin>>cadena;

    for(int i = 0;i<=cadena.length();i++)
    {
		var1 = 0;
		
    	while (var1<26)
    	{
    		if(cadena[i] == c[var1])
    		{
	    		cout<<cadena[i]<<" es una letra\n";
				break;
			}
			else
			{
				var1++;	
			}
			
		}
		
		var2 = 0;
		
		while (var2<10)
    	{
    		if(cadena[i] == n[var2])
    		{
	    		cout<<cadena[i]<<" es un numero\n";
				break;
			}
			else
			{
				var2++;	
			}
			
		}
		
	}
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
