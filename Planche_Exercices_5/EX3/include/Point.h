#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(double x1, double y1);
    Point( const Point& p);
    void affiche();
    static bool comparer( Point& p1,  Point& p2);
    static double distance( Point& p1,  Point& p2);
    static Point milieu(Point& p1, Point& p2);
    virtual ~Point();

protected:
private:
    double x;
    double y;
};

#endif // POINT_H
