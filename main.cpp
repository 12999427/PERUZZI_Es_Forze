#include <iostream>

#include "Forza.h"

int main() {

    Forza f1(10, 20);
    std::cout << "V(10,20): Rad " << f1.calcolaAngoloRad() << " - Deg " << f1.calcolaAngoloDeg() << " - Modulo " << f1.calcolaModulo() <<std::endl;
    Forza f2(20, 40);
    std::cout << (f1==f2 ? "V(20,40) V(10,20) I due vettori sono concordi\n" : "I due vettori sono discordi\n");
    Forza f3(30, 9);
    std::cout << "V(30,9): Rad " << f3.calcolaAngoloRad() << " - Deg " << f3.calcolaAngoloDeg() << " - Modulo " << f3.calcolaModulo() <<std::endl;
    std::cout << (f1==f2 ? "V(30,9) V(10,20) I due vettori sono concordi\n" : "I due vettori sono discordi\n");
    Forza fr = (f1+f2);
    std::cout << "FR: Rad " << fr.calcolaAngoloRad() << " - Deg " << fr.calcolaAngoloDeg() << " - Modulo " << fr.calcolaModulo() <<std::endl;
    double prodottoscal = (f1*f2);
    std::cout<<"V(10,20) * V(20,40): " << prodottoscal;

    return 0;
}
