#include <iostream>
#include <string>

int main() {
    std::string answer;
    
    std::cout << "Hola, bienvenido, tendrás que adivinar 5 preguntas que te haré sobre fútbol." << std::endl;

    // Pregunta 1
    std::cout << "¿Quién es mejor, Messi o CR7?" << std::endl;
    std::cin >> answer;
    
    if (answer == "Messi" || answer == "messi") {
        std::cout << "Es correcto, el GOAT es Messi." << std::endl;
    } else {
        std::cout << "No papi, estás en lo incorrecto, bye, bye." << std::endl;
    }

    // Pregunta 2
    std::cout << "¿Quién ganó el último Mundial que se jugó?" << std::endl;
    std::cin >> answer;

    if (answer == "Argentina" || answer == "argentina") {
        std::cout << "Estás en lo correcto, hermosa." << std::endl;
    } else {
        std::cout << "Es cultura general, nms, pal gulag." << std::endl;
    }

    // Pregunta 3
    std::cout << "¿Quién es mejor, Maradona o Pelé?" << std::endl;
    std::cin >> answer;

    if (answer == "Pele" || answer == "pele") {
        std::cout << "Si elegiste Pelé, tqm." << std::endl;
    } else {
        std::cout << "Nomás porque es negro, chale." << std::endl;
    }

    // Pregunta 4 (nueva)
    std::cout << "¿Cuál equipo ha ganado más Champions League?" << std::endl;
    std::cin >> answer;

    if (answer == "Real Madrid" || answer == "real madrid") {
        std::cout << "Correcto, el Real Madrid es el rey de Europa." << std::endl;
    } else {
        std::cout << "No papi, el Real Madrid es el que más tiene." << std::endl;
    }

    // Pregunta 5 (nueva)
    std::cout << "¿En qué país se jugó el Mundial de 2010?" << std::endl;
    std::cin >> answer;

    if (answer == "Sudáfrica" || answer == "sudáfrica" || answer == "Sudafrica" || answer == "sudafrica") {
        std::cout << "Correcto, el Mundial de 2010 fue en Sudáfrica." << std::endl;
    } else {
        std::cout << "No, fue en Sudáfrica." << std::endl;
    }

    return 0;
}
