//
// Created by gvnnp on 29/11/2025.
//

#include "Forza.h"
#include <math.h>
#include <numbers>

Forza::Forza() {
    X = 0;
    Y = 0;
}
Forza::Forza(double x, double y) {
    X = x;
    Y = y;
}

double Forza::calcolaModulo () {
    return sqrt(X*X + Y*Y);
}

double Forza::calcolaAngoloRad () {
    return atan(Y/X);
}

double Forza::calcolaAngoloDeg () {
    return calcolaAngoloRad()/std::numbers::pi*180;
}

Forza Forza::operator+(Forza f2) {
    Forza forzaRisultante;
    forzaRisultante.X = X+f2.X;
    forzaRisultante.Y = Y+f2.Y;

    return forzaRisultante;
}

double Forza::operator*(Forza f2) {
    return X*f2.X + Y+f2.Y;
}

bool Forza::operator==(Forza f2) {
    return (abs(calcolaAngoloRad() - f2.calcolaAngoloRad()) < 0.001);

}

bool Forza::operator!=(Forza f2) {
    return (abs(calcolaAngoloRad() - f2.calcolaAngoloRad()) > 0.001);
}