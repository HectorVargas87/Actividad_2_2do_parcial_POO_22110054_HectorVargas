#include<iostream>
#include<string>

using namespace std;
int d, m, a;
string nuevaFecha;

int main() 
{
    do
    {
        cout << "Ingresa dia:" << endl;
        cin >> d;

        cout << "Ingresa mes:" << endl;
        cin >> m;

        cout << "Ingresa año:" << endl;
        cin >> a;

        if (a < 1)
            cout << "-Fecha incorrecta-" << endl;
        else
            if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d >= 1 && d <= 31)) 
            {
                cout << "-Fecha correcta-" << endl;
            }
            else
                if ((m == 4 || m == 6 || m == 9 || m == 11) && (d >= 1 && d <= 30)) 
                {
                    cout << "-Fecha correcta-" << endl;
                }
                else
                    if ((m == 2) && (d >= 1 && d <= 28)) 
                    {
                        cout << "-Fecha correcta-" << endl;
                    }
                    else
                        if (((m == 2) && (d >= 1 && d <= 29)) && ((a % 4 == 0 && a % 100 != 10) || a % 400 == 0)) 
                        {
                            cout << "-Fecha correcta y es bisiesto-" << endl;
                        }
                    else
                        {
                        cout << "-Fecha incorrecta-" << endl;
                        }
                        if(m==12)//incrementar dia
                        {
                            d=1;
                            m=1;
                            a++;
                            cout << "\nLa fecha del dia siguiente es: " <<a<<"/"<<m<<"/"<<d<<endl;
                        }
                        else if((m == 2) && (d >= 1 && d <= 28))
                        {
                            d=1;
                            m++;
                            cout << "\nLa fecha del dia siguiente es: " <<a<<"/"<<m<<"/"<<d<<endl;
                        }
                        else if(((m == 2) && (d >= 1 && d <= 29)) && ((a % 4 == 0 && a % 100 != 10) || a % 400 == 0))
                        {
                            d=1;
                            m++;
                            cout << "\nLa fecha del dia siguiente es: " <<a<<"/"<<m<<"/"<<d<<endl;
                        }
                        else if((d==30) && (m >= 1 && m <= 12) && (m == 4 || m == 6 || m == 9 || m == 11))
                        {
                            d=1;
                            m++;
                            cout << "\nLa fecha del dia siguiente es: " <<a<<"/"<<m<<"/"<<d<<endl;
                        }
                        else if((d==31) && (m >= 1 && m <= 12) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
                        {
                            d=1;
                            m++;
                            cout << "\nLa fecha del dia siguiente es: " <<a<<"/"<<m<<"/"<<d<<endl;
                        }
                        cout<<"\nDeseas validar otra fecha? (S/N o pulse cualquier tecla para finalizar)\n"; 
 	                    cin>> nuevaFecha;
        	}while(nuevaFecha == "S" || nuevaFecha == "s" || nuevaFecha == "Si" || nuevaFecha == "SI" || nuevaFecha == "si"); 
	
	cout<< "\n\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" <<endl;
 	cout<<"*-*-*-*-*                             Hasta la proxima                             *-*-*-*-*\n"; 
    
    return 0;
}