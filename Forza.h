//
// Created by gvnnp on 29/11/2025.
//

#ifndef PERUZZI_ES_FORZE_FORZA_H
#define PERUZZI_ES_FORZE_FORZA_H


class Forza {
private:
    double X;
    double Y;
public:
    Forza();
    Forza(double x, double y);
    double calcolaModulo ();
    double calcolaAngoloRad ();
    double calcolaAngoloDeg ();

    Forza operator+(Forza f2);
    double operator*(Forza f2);

    bool operator==(Forza f2);
    bool operator!=(Forza f2);
};


#endif //PERUZZI_ES_FORZE_FORZA_H