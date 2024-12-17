#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
    double x;
    double y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}

    void affiche() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

#endif // POINT_H
