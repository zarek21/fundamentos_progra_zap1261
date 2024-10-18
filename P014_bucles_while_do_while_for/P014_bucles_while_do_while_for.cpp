//Tenemos que contar del 1000 al 0 usando los 3 ciclos
//Contar 10*10
//Contar hasta 100 lento
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    // Usando ciclo for
    for (int i = 1000; i >= 0; i--) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Usando ciclo While
    int j = 1000;
    while (j >= 0) {
        std::cout << j << " ";
        j--;
    }
    std::cout << std::endl;

    // Usando ciclo Do While
    int k = 1000;
    do {
        std::cout << k << " ";
        k--;
    } while (k >= 0);
    std::cout << std::endl;

    // Contar 10x10 (hasta 100)
    int l = 1;
    do {
        std::cout << l << " ";
        l++;
    } while (l <= 100);
    std::cout << std::endl;

    // Contar hasta 100 lento
    for (int m = 1; m <= 100; m++) {
        std::cout << m << " ";
        _Thrd_sleep_for(100);
    }
    std::cout << std::endl;

    return 0;
}