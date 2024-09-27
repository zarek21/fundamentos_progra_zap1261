// P001_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Saleme
//Este archivo contiene la funcion 
//"main". La ejecucion del programa
//Comienza y termina ahi.
//Hablaremos con el usuario mediante
//STD::COUT << " ";
//Declaracion de variables y operaciones aritmeticas
#include <iostream>
#include <math.h>
#include <time.h>
#include <locale>//Libreria para cambiar idiomas
#include <codecvt>//Libreria para combiar codigos de UFT
int main()
{
    //
    std::locale::global(std::locale("en_US.UFT-8"));
    std::cout << "Chucky!\n";
    //Inicializarmeos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de declaracion o inicializacion
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales 
    float Altura = 0;
    float Cali = 0;
    //Para guardar VERDADES o FALSEDADES
    bool d1 = false;
    //Para guardar numeros REALMENTE EXTENSOS 
    double Expoencial = 0;
    //Para guardar letras!!
    char sexo = ' ';
    //Para guardar cadenas de caracteres osea muchas letras
    char nombre[15] = "";
    std::string name = "";

    //Hablaremos con el usuario y solicitaremos la informacion.
    std::cout << "Cuentame!! Cuántos años tienes? ";
    //Para recibir datos del usuario necesitamos utilizar el protocolo de entrada de datos
    //STD::CIN >> Variable donde se guardaran los datos.
    std::cin >> Edad;
    std::cout << "Entonces tienes: " << Edad << " años, Super! bienvenido" << std::endl;
    std::cout << "porfavor ingresa tu altura:";
    std::cin >> Altura;
    std::cout << "perfecto,muchas gracias, ahora dime tus calificaciones:";
    std::cin >> Cali;
    //Entrada de cadena de texto
    std::string EntradaDeTextoDeCadena;
    std::cout << "Porfavor ingresa una Cadena de texto" << std::endl;
    std::cin >> EntradaDeTextoDeCadena;
    //Double
    double Entradadetextodoble;
    std::cout << "porfavor ingresa un numero largo, como tu ultima relacion rey" << std::endl;
    std::cin >> Entradadetextodoble;
    //char
    char Entradadetextocaracter;
    std::cout << "porfavor ingresa un nombre papi" << std::endl;
    std::cin >> Entradadetextocaracter;
    //Char sexo
    char Entradadetextosexo;
    std::cout << "porfavor ingresa tu sexo" << std::endl;
    std::cin >> Entradadetextosexo;
    //boleano
    bool Entradadetextoboleano;
    std::cout << "porfavor ingrea un boleano perro asno (0 o 1)"<< std::endl;
    std::cin >> Entradadetextoboleano;
    //Hacer una suma de dos datos que ingrese el usuario
    //Primero Declaramos
    int numero1, numero2;
    //Segundo solicitamos
    std::cout << "porfavor ingresa un numero para sumar:"<< std::endl;
    std::cin >> numero1;
    std::cout << "Ingresa el segundo numero a ingresar: "<< std::endl;
    std::cin >> numero2;
    //Tercero recibimos
   //cuarto operamos o utilizamos
    std::cout << "Gracias, el resultado de la suma es: " << numero1+ numero2 << std::endl;




    



  
    

    






}
