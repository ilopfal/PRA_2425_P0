#include "BrazoRobotico.h"
//método constructor
BrazoRobotico::BrazoRobotico(double xInicial, double yInicial, double zInicial)
    : x(xInicial), y(yInicial), z(zInicial), sujetando(false) {}
//métodos consultores
double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::estaSujetando() const {
    return sujetando;
}


void BrazoRobotico::coger() {
    if (!sujetando) {
        sujetando = true;
    }
}

void BrazoRobotico::soltar() {
    if (sujetando) {
        sujetando = false;
    }
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
}

