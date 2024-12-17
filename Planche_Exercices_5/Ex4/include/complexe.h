#ifndef complexe_H
#define complexe_H


class complexe
{
    public:

        complexe();
        void afficher();
        double module();
        complexe(double r,double i);
        complexe conjuge();
        double getRe();
        double getImg();
        virtual ~complexe();
    protected:

    private:
        double Re;
        double Img;

};
complexe operator+( complexe& c1,  complexe& c2);
complexe operator+( complexe& c, double reel);
complexe operator+(double reel,  complexe& c);

complexe operator-( complexe& c1,  complexe& c2);
complexe operator-( complexe& c, double reel);
complexe operator-(double reel,  complexe& c);

complexe operator*( complexe& c1,  complexe& c2);
complexe operator*( complexe& c, double reel);
complexe operator*(double reel,  complexe& c);

#endif // complexe_H
