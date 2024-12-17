#include "Cercle.h"
#include <iostream>
#include <cmath>

using namespace std;

Cercle::Cercle(double rayon, const Point& centre) : rayon(rayon), centre(centre) {}

Cercle::Cercle(double rayon, double x, double y) : rayon(rayon), centre(x, y) {}

void Cercle::afficher() const {
    cout << "Cercle de rayon " << rayon << " et de centre ";
    centre.affiche();
}

double Cercle::obtenirRayon() const {
    return rayon;
}

void Cercle::changerRayon(double rayon) {
    this->rayon = rayon;
}

Point Cercle::obtenirCentre() const {
    return centre;
}

void Cercle::translaterCentre(double dx, double dy) {
    centre.x += dx;
    centre.y += dy;
}

double Cercle::surface() const {
    return M_PI * rayon * rayon;
}

double Cercle::perimetre() const {
    return 2 * M_PI * rayon;
}

bool Cercle::estEgal(const Cercle& autre) const {
    return (rayon == autre.rayon && centre.x == autre.centre.x && centre.y == autre.centre.y);
}

bool Cercle::contientPoint(const Point& p) const {
    double distance = sqrt(pow(p.x - centre.x, 2) + pow(p.y - centre.y, 2));
    return distance <= rayon;
}
