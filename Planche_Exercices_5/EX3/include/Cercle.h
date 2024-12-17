#ifndef CERCLE_H
#define POINT_H

class Cercle {
private:
    double rayon;
    Point centre;

public:
    Cercle(double rayon, const Point& centre);
    Cercle(double rayon, double x, double y);

    void afficher() const;
    double obtenirRayon() const;
    void changerRayon(double rayon);
    Point obtenirCentre() const;
    void translaterCentre(double dx, double dy);
    double surface() const;
    double perimetre() const;
    bool estEgal(const Cercle& autre) const;
    bool contientPoint(const Point& p) const;
};
//Classe Point
class Point;



