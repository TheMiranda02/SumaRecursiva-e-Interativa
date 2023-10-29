// SumaRecursiva-e-Interativa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//ELIAS MIRANDA 

#include <iostream>

using namespace std;

int sumaIterativa(int n)
{
	int suma = 0;

	while (n > 9) {
		suma += n % 10;
		n /= 10;
	}
	return (suma + n);
}

int sumaRecursiva(int n) {
	if (n <= 9) {
		return n;
	}
	else
	{
		return sumaIterativa(n / 10) + n % 10;
	}
}


int main() {

	int n;

	cout << " Digite un numero para n: "; cin >> n;


	 cout<<" la suma Iterativa es: " << sumaIterativa(n) << endl;
	 cout<<" La suma Recursiva es: " << sumaRecursiva(n) << endl;;
}