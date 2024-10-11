
    // Ejecutaremos la sintaxys de bucles
    // Para que sirve un bucle?
    // Repetir - Contar - Cobrar - Reconexion
    // WHILE - DO WHILE - FOR

#include <iostream>
#include <cstdlib>

    int main()
    {
        //Sintaxys 1.- While
        int contador = 0;
        // Declaración de función while
        // Mientras el contador sea menor a 100.
        while (contador <= 100)
        {
            contador++; // Aumento del contador en 1.
            //Contador = contador + 2; Aumento del contador de 2 en 2.
            std::cout << "El contador va en: " << contador << std::endl;
        }
        //Sintaxys 2.- DO While
        // Siempre se ejecuta por lo menos una vez.
        // Declaración
        do
        {
            contador--;
            std::cout << "El contador DO WHILE va en: " << contador << std::endl;
        } while (contador >= 0);
        //Sintaxys 3.- FOR
        // La extructura de control más segura
        // en su declaración colocamos el inicio y el final
        for (int i = 0; i < 5; i++)
        {
            std::cout << "Esto se ejecutará hasta que pierdas tus " << i << " vidas... \n";
            std::cout << "Presiona una tecla...\n";
            std::cout << "jaja perdiste una vida vuelve a intentarlo u.u \n";
            system("Color 1f");
            system("pause");
            system("cls");
        }
  
    /*Codigo
            Color
    0    Negro
    1    Azul
    2    Verde
    3    Celeste cielo
    4    Rojo
    5    Morado
    6    Amarillo
    7    Blanco hueso
    8    Gris
    9    Celeste
    a    Verde claro
    b    Celeste claro
    c    Rojo fuerte
    d    Morado oscuro
    e    Color crema
    f    Blanco puro

            */
}