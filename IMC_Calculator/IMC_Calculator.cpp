#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
// Vamos a crear un consultorio medico que determine tu IMC utilizando 3 bools, 2 strings, 1 char, 2 int y 1 float.

//Declaramos las variables
bool Alcohol, Fuma, Ejercicio; 
std::string nombre, apellido;
char genero;
int edad, peso;
float altura;

//Nombre de consultorio
std::cout << "Bienvenido al consultorio medico del cacas\n" << std::endl;

//Uso de 2 strings
cout << "Porfavor ingresa tu nombre: ";
cin >> nombre; //Variable
cout << "Porfavor ingresa tu apellido: " ;
cin >> apellido; //Variable

//Uso de los 3 booleanos
std::<< "Tomas alcohol? (0 no), (1 si): " ;
std::cin >> Alcohol;
std::cout << "Fumas como tren? (0 no), (1 si): " ;
std::cin >> Fuma;
std::cout << "Haces ejercicio papoi? (0 no), (1 si): " ;
std::cin >> Ejercicio;

//Uso de 1 char
std::cout << "Eres H o M: ";
std::cin >> genero;

//Uso de 2 int
std::cout << "Porfavor ingresa tu edad rey: ";
std::cin >> edad;
std::cout << "Porfavor ingresa tu peso en kg: ";
std::cin >> peso;

//Uso de 1 Float
std::cout << "porfavor ingresa tu altura, por ejemplo (1.80): ";
std::cin >> altura;

// Ahora vamos a calcular el IMC con estos datos
    float imc = peso / pow(altura, 2); // o imc = peso / (altura * altura);

// Mostrar el resultado del IMC
    std::cout << "\n----- Resultados -----\n";
    std::cout << "IMC: " << imc <<"";
return 0;
}