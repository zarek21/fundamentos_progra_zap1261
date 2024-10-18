#include <iostream>
#include <string>
#include <chrono>

int main()
{
    // 1000 a 0 con los 3 ciclos.
    std::cout << "while" << std::endl;
    int i = 1000; // Inicializa la variable en 1000
    while (i >= 0) { // Mientras i sea mayor o igual a 0
        std::cout << i << std::endl; // Imprime el valor de i
        i--; // Decrementa i en 1
    }


    std::cout << "for" << std::endl;
    for (i = 1000; i >= 0; i--)
    {
        std::cout << i << std::endl; // Imprime el valor de i
    }

    std::cout << "Do" << std::endl;
    int e = 1000;
    do
    {
        std::cout << e << std::endl; // Imprime el valor de i
        e--;
    } while (e >= 0);

    //contar en 10*10

    for (int i = 1000; i >= 0; i--) { // Bucle que va de 1000 a 0
        std::cout << i << "\t"; // Imprime el valor de i seguido de un tabulador
        if ((1000 - i) % 10 == 9) { // Comprueba si han pasado 10 iteraciones
            std::cout << std::endl; // Salto de línea
        }
    }

    //Contar hasta 100 lento
    for ( i = 0; i <=100; i++)
    {
        std::cout << i << std::endl;
        _Thrd_sleep_for(50);
    }

}
