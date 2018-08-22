#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void pausa();
 
int main()
{
    bool bandera=false;
    char tecla;
 
    do
    {
        system("cls");
        cin.clear();
        cout << " " << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .-" << endl;
        cout << "\t2 .-" << endl;
        cout << "\t3 .-" << endl;
        cout << "\t4 .-" << endl;
        cout << "\t5 .-" << endl << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				system("cls");
				cout << ".\n";
				pausa();
				break;
 
			case '2':
				system("cls");
				cout << ".\n";
				pausa();
				break;
 
			case '3':
				system("cls");
				cout << ".\n";
				pausa();
				break;
 
			case '4':
				system("cls");
				cout << ".\n";
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

