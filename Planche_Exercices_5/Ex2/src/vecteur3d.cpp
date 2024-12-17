#include "vecteur3d.h"
#include <iostream>
#include <cmath>
using namespace std;

vecteur3d::vecteur3d()
{
    x=0;
    y=0;
    z=0;
}
vecteur3d::vecteur3d(float x1,float y1,float z1)
{
    x=x1;
    y=y1;
    z=z1;
}
void vecteur3d::afficher(){
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}


vecteur3d vecteur3d ::somme(vecteur3d& v1,vecteur3d& v2){
    return vecteur3d(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
    }
vecteur3d vecteur3d ::produit(vecteur3d& v1,vecteur3d& v2){
    return vecteur3d(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
    }
bool vecteur3d ::coincide(vecteur3d& v1,vecteur3d& v2){
    return v1.x == v2.x&& v1.y == v2.y&& v1.z == v2.z;
    }
double vecteur3d::norme() {
    return std::sqrt(x * x + y * y + z * z);
}
vecteur3d vecteur3d::normax(vecteur3d& autre){
    if (this->norme() >= autre.norme()) {
        return *this;
    } else {
        return autre;
    }
}
vecteur3d* vecteur3d::normaxParAdresse(vecteur3d& autre) {
    if (this->norme() >= autre.norme()) {
        return this;
    } else {
        return const_cast<vecteur3d*>(&autre);
    }
}

vecteur3d& vecteur3d::normaxParReference(vecteur3d& autre) {
    if (this->norme() >= autre.norme()) {
        return *this;
    } else {
        return const_cast<vecteur3d&>(autre);
    }
}


