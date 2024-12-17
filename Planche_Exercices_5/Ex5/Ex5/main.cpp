#include "Cercle.h"
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    Cercle c1(1, Point(10, 10));
    c1.afficher();
    cout << "Perimetre : " << c1.perimetre() << endl;
    cout << "Surface : " << c1.surface() << endl;

    c1.changerRayon(2);
    cout << "Apres doublement du rayon:" << endl;
    cout << "Perimetre : " << c1.perimetre() << endl;
    cout << "Surface : " << c1.surface() << endl;

    c1.translaterCentre(-10, -10);
    cout << "Apres translation du centre:" << endl;
    c1.afficher();

    Point p1(1, 1);
    Point p2(3, 3);

    if (c1.contientPoint(p1)) {
        cout << "Le point (1, 1) est à l'interieur du cercle." << endl;
    } else {
        cout << "Le point (1, 1) n'est pas à l'interieur du cercle." << endl;
    }

    if (c1.contientPoint(p2)) {
        cout << "Le point (3, 3) est à l'interieur du cercle." << endl;
    } else {
        cout << "Le point (3, 3) n'est pas à l'interieur du cercle." << endl;
    }

    Cercle c2(2, Point(0, 0));
    if (c1.estEgal(c2)) {
        cout << "Les cercles sont egaux." << endl;
    } else {
        cout << "Les cercles ne sont pas egaux." << endl;
    }

    return 0;
}
