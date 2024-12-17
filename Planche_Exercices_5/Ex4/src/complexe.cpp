#include "complexe.h"
#include <iostream>
#include <math.h>
using namespace std;

complexe::complexe()
{
    Re=0;
    Img=0;
}
complexe::complexe(double r,double i)
{
    Re=r;
    Img=i;
}
double complexe::getRe() {
    return Re;
}

double complexe::getImg() {
    return Img;
}
void complexe::afficher()
{
    cout<<Re<<"i"<<" + "<<Img<<endl;
}

double complexe::module()
{
    return sqrt(Re*Re+Img*Img);
}
complexe complexe::conjuge()
{
    return complexe(Img,(-1*Re));
}
complexe operator+(complexe& a,complexe& b){
    return complexe(a.getRe()+b.getRe(),a.getImg()+b.getImg());
}
complexe operator+(complexe& a,double b){
    return complexe(a.getRe()+b,a.getImg());
}
complexe operator+(double b,complexe& a){
    return complexe(a.getRe()+b,a.getImg());
}
complexe operator-(complexe& a,complexe& b){
    return complexe(a.getRe()-b.getRe(),a.getImg()-b.getImg());
}
complexe operator-(complexe& a,double b){
    return complexe(a.getRe()-b,a.getImg());
}
complexe operator-(double b,complexe& a){
    return complexe(a.getRe()-b,a.getImg());
}
complexe operator*(complexe& c1,complexe& c2) {
    double r = c1.getRe() * c2.getRe() - c1.getImg() * c2.getImg();
    double i = c1.getRe() * c2.getImg() + c1.getImg() * c2.getRe();
    return complexe(r, i);
}
complexe operator*(complexe& a,double b){
    return complexe(a.getRe()*b,a.getImg()*b);
}
complexe operator*(double b,complexe& a){
    return complexe(a.getRe()*b,a.getImg()*b);
}

complexe::~complexe()
{
    //dtor
}
