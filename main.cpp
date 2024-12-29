#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main() {
    
    BrazoRobotico brazo(0, 0, 0);

    cout << "Posición inicial: (" 
         << brazo.getX() << ", " 
         << brazo.getY() << ", " 
         << brazo.getZ() << ")\n";

    brazo.mover(10.5, 20.0, 15.3);
    cout << "Posición después de mover: (" 
         << brazo.getX() << ", " 
         << brazo.getY() << ", " 
         << brazo.getZ() << ")\n";

    brazo.coger();
    cout << "¿Está sujetando un objeto? " 
         << (brazo.estaSujetando() ? "Sí" : "No") << "\n";

    return 0;
}

