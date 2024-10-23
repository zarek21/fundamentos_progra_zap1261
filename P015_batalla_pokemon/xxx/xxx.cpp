#include <iostream>
#include <string>
#include <locale>
#include <cstdlib>
#include <ctime> // Libreria que nos va ayudar a usar srand para poder crear ataques aleatorios usando residuo %
#include <chrono>

using namespace std;

void efectoRelampago() {
    system("Color 1f");
    _Thrd_sleep_for(300);
    system("Color 07");
}

void efectoCharizard() {
    system("Color 4f");
    _Thrd_sleep_for(300);
    system("Color 07");
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    srand(static_cast<unsigned int>(time(0)));

    int pikachuhp = 100;
    int charizardhp = 100;
    int ataque;
    string eleccion;

    cout << "Elige tu Pokémon (Pikachu o Charizard): ";
    getline (cin,eleccion);

    if (eleccion == "Pikachu" || eleccion == "pikachu") {
        cout << "Has elegido a Pikachu.\n";
    }
    else if (eleccion == "Charizard" || eleccion == "charizard") {
        cout << "Has elegido a Charizard.\n";
    }
    else {
        cout << "Selección no válida. Se seleccionará Pikachu por defecto.\n";
        eleccion = "Pikachu";
    }

    do {
        if (eleccion == "Pikachu" || eleccion == "pikachu") {
            cout << "HP de Pikachu: " << pikachuhp << endl;
            cout << "HP de Charizard: " << charizardhp << endl;

            cout << "\nElige un ataque para Pikachu:" << endl;
            cout << "1. Ataque rápido (10 HP)" << endl;
            cout << "2. Ataque relámpago (15 HP)" << endl;
            cout << "3. Ataque Trueno (20 HP)" << endl;
            cout << "4. Voltio Cruel (30 HP, Pikachu recibe 15 HP de daño)" << endl;
            cout << "0. Salir" << endl;

            cin >> ataque;

            switch (ataque) {
            case 1:
                efectoRelampago();
                cout << "Pikachu usa Ataque rápido!" << endl;
                charizardhp -= 10;
                break;
            case 2:
                efectoRelampago();
                cout << "Pikachu usa Ataque relámpago!" << endl;
                charizardhp -= 15;
                break;
            case 3:
                efectoRelampago();
                cout << "Pikachu usa Ataque Trueno!" << endl;
                charizardhp -= 20;
                break;
            case 4:
                efectoRelampago();
                cout << "Pikachu usa Voltio Cruel!" << endl;
                charizardhp -= 30;
                pikachuhp -= 25;
                break;
            case 0:
                cout << "Saliendo del combate..." << endl;
                return 0;
            default:
                cout << "Ataque no válido, intenta de nuevo." << endl;
                continue;
            }

            if (charizardhp <= 0) {
                cout << "¡Charizard ha sido derrotado!" << endl;
                break;
            }

            int ataqueCharizard = rand() % 4;

            cout << "\nCharizard ataca de vuelta..." << endl;
            switch (ataqueCharizard) {
            case 1:
                efectoCharizard();
                cout << "Charizard usa Lanzallamas! (-12 HP)" << endl;
                pikachuhp -= 12;
                break;
            case 2:
                efectoCharizard();
                cout << "Charizard usa Garra Dragón! (-18 HP)" << endl;
                pikachuhp -= 18;
                break;
            case 3:
                efectoCharizard();
                cout << "Charizard usa Vuelo! (-10 HP)" << endl;
                pikachuhp -= 10;
                break;
            }

            if (pikachuhp <= 0) {
                cout << "¡Pikachu ha sido derrotado!" << endl;
                break;
            }

        }
        else if (eleccion == "Charizard" || eleccion == "charizard") {
            cout << "HP de Charizard: " << charizardhp << endl;
            cout << "HP de Pikachu: " << pikachuhp << endl;

            cout << "\nElige un ataque para Charizard:" << endl;
            cout << "1. Lanzallamas (12 HP)" << endl;
            cout << "2. Garra Dragón (18 HP)" << endl;
            cout << "3. Vuelo (10 HP)" << endl;
            cout << "4. Terremoto (25 HP, Charizard recibe 15 HP de daño)" << endl;
            cout << "0. Salir" << endl;

            cin >> ataque;

            switch (ataque) {
            case 1:
                efectoCharizard();
                cout << "Charizard usa Lanzallamas!" << endl;
                pikachuhp -= 12;
                break;
            case 2:
                efectoCharizard();
                cout << "Charizard usa Garra Dragón!" << endl;
                pikachuhp -= 18;
                break;
            case 3:
                efectoCharizard();
                cout << "Charizard usa Vuelo!" << endl;
                pikachuhp -= 10;
                break;
            case 4:
                efectoCharizard();
                cout << "Charizard usa Terremoto!" << endl;
                pikachuhp -= 25;
                charizardhp -= 5;
                break;
            case 0:
                cout << "Saliendo del combate..." << endl;
                return 0;
            default:
                cout << "Ataque no válido, intenta de nuevo." << endl;
                continue;
            }

            if (pikachuhp <= 0) {
                cout << "¡Pikachu ha sido derrotado!" << endl;
                break;
            }

            int ataquePikachu = rand() % 4;

            cout << "\nPikachu ataca de vuelta..." << endl;
            switch (ataquePikachu) {
            case 1:
                efectoRelampago();
                cout << "Pikachu usa Ataque rápido! (-10 HP)" << endl;
                charizardhp -= 10;
                break;
            case 2:
                efectoRelampago();
                cout << "Pikachu usa Ataque relámpago! (-15 HP)" << endl;
                charizardhp -= 15;
                break;
            case 3:
                efectoRelampago();
                cout << "Pikachu usa Ataque Trueno! (-20 HP)" << endl;
                charizardhp -= 20;
                break;
            }

            if (charizardhp <= 0) {
                cout << "¡Charizard ha sido derrotado!" << endl;
                break;
            }
        }

        system("pause");
        system("cls");

    } while (ataque != 0);

    system("pause");

    return 0;
}
