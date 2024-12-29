#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z; // Coordenadas en el espacio 3D
    bool sujetando; // Indica si el brazo está sujetando un objeto

public:
    // Constructor
    BrazoRobotico(double xInicial = 0, double yInicial = 0, double zInicial = 0);

    // Métodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif // BRAZOROBOTICO_H

