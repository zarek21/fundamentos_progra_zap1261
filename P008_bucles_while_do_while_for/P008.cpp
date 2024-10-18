// DoWhile_ForWhile.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
#include <cstdlib>


int main()
{
	int edad;

	do
	{
		std::cout << "Hola, finaliza el programa cuando ingresas 300\n ";
		std::cin >> edad;
	} while (edad != 300); // EL SIMBOLO ! SIGNIFICA NO SEA, ENTONCES ESTA LINEA SE LEE COMO EDAD NO SEA IGUAL A 300.
	system("pause");
	system("cls");

	for (int i = 0; i < 20; i++)
	{
		std::cout << "Hola papi";

	}
	return 0;
}
