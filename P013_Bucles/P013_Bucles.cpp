#include <iostream>
#include <string>

int main()
{
    //Vamos a pedir un log in al usuario con los datos correctos para ingresar.
    //Si el usuario ingresa algun dato incorrecto haremos que le pida de nuevo el log in.
std::string usuario, contraseña;
    std::cout << "Bienvenido al Game Papu, ingresa los siguientes datos para hacer log in: " << std::endl;
    std::cout << "Usuario (paputron): " << std::endl;
    std::cin >> usuario;
    std::cout << "Contraseña (yobuapo): " << std::endl;
    std::cin >> contraseña;
while (usuario!="paputron")
{
    std::cout << "Ese no es el usuario correcto bro, ingresa el que se te pide" << std::endl;
    std::cin>>usuario;
}
while (contraseña!="yobuapo")
{
    std::cout << "Esa no es la contraseña corrrecta, ingresa la correcta para continuar" << std::endl;
    std::cin >> contraseña;
}

std::cout << "Bienvenido hermano, disfruta del game :)" << std::endl;
return 0;

}