#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class vecteur3d
{
    public:
        void afficher();
        vecteur3d();
        vecteur3d(float x1,float y1,float z1);
        vecteur3d static somme(vecteur3d& v1,vecteur3d& v2);
        vecteur3d static produit(vecteur3d& v1,vecteur3d& v2);
        bool static coincide(vecteur3d& v1,vecteur3d& v2);
        double norme();
        vecteur3d normax(vecteur3d& autre);
        vecteur3d* normaxParAdresse(vecteur3d& autre);
        vecteur3d& normaxParReference(vecteur3d& autre);

    protected:

    private:
        float x;
        float y;
        float z;
};

#endif // VECTEUR3D_H
