#include<iostream>
#include<string>

using namespace std;
int d, m, a;

int main() 
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
					cout << "-Fecha incorrecta-" << endl;
	return 0;
}