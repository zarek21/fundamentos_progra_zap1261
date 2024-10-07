#include <iostream>
#include <string>

int main() {
    int peleadores;
    int sistemaCombate;

    // Solicitar el número de peleadores
    std::cout << "Bienvenido al sistema de combates.\n";
    std::cout << "Ingresa el número de peleadores en la arena: ";
    std::cin >> peleadores;

    // Asegurarse de que el número de peleadores sea válido
    if (peleadores <= 1) {
        std::cout << "Debe haber al menos 2 peleadores para realizar batallas.\n";
        return 1;
    }

    // Solicitar el sistema de combate
    std::cout << "Selecciona el sistema de combate:\n";
    std::cout << "1.- Royal Rumble\n";
    std::cout << "2.- Eliminatoria directa\n";
    std::cout << "3.- Grupos, semifinal y final\n";
    std::cin >> sistemaCombate;

    int batallas = 0;

    // Usamos un switch para cada sistema de combate
    switch (sistemaCombate) {
    case 1:
        // Royal Rumble: Necesitas (peleadores - 1) batallas para tener un ganador
        batallas = peleadores - 1;
        std::cout << "Sistema de combate: Royal Rumble\n";
        std::cout << "Número de batallas necesarias: " << batallas << std::endl;
        break;

    case 2:
        // Eliminatoria directa: también necesita (peleadores - 1) batallas
        batallas = peleadores - 1;
        std::cout << "Sistema de combate: Eliminatoria directa\n";
        std::cout << "Número de batallas necesarias: " << batallas << std::endl;
        break;

    case 3:
        // Grupos, Semifinal y Final: Consideremos que hay 4 grupos de peleadores
        // Si hay 4 grupos, 1 semifinal y 1 final, son (peleadores / 4) batallas por grupo
        if (peleadores >= 4) {
            int peleadoresPorGrupo = peleadores / 4;
            batallas = peleadoresPorGrupo * 3 + 3; // 3 batallas de grupos + semifinal + final
            std::cout << "Sistema de combate: Grupos, semifinal y final\n";
            std::cout << "Número de batallas necesarias: " << batallas << std::endl;
        }
        else {
            std::cout << "No es posible dividir a menos de 4 peleadores en grupos.\n";
        }
        break;

    default:
        std::cout << "Sistema de combate no válido.\n";
    }

    return 0;
}