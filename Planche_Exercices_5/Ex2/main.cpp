#include <iostream>

#include <cmath>
#include "vecteur3d.h"

using namespace std;

int main()
{
     vecteur3d v1(1.0f, 2.0f, 3.0f);
    vecteur3d v2(4.0f, 5.0f, 6.0f);

    cout << "Vecteur 1: ";
    v1.afficher();

    cout << "Vecteur 2: ";
    v2.afficher();

    cout << "\n Somme des deux vecteurs: ";
    vecteur3d vSomme = vecteur3d::somme(v1, v2);
    vSomme.afficher();

    cout << "\n Produit des deux vecteurs: ";
    vecteur3d vProduit = vecteur3d::produit(v1, v2);
    vProduit.afficher();

    cout << "\n";
    if (vecteur3d::coincide(v1, v2)) {
        cout << "Les vecteurs sont identique" << endl;
    } else {
        cout << "Les vecteurs ne sont pas identiques" << endl;
    }

    cout << "\n Norme du vecteur 1: " << v1.norme() << endl;
    cout << "Norme du vecteur 2: " << v2.norme() << endl;

    vecteur3d vNormax = v1.normax(v2);
    cout << "\n Vecteur avec la plus grande norme: ";
    vNormax.afficher();

    /*vecteur3d* vNormaxAdresse = v1.normaxParAdresse(v2);
    cout << "\n Vecteur avec la plus grande norme : ";
    vNormaxAdresse->afficher();

    vecteur3d& vNormaxReference = v1.normaxParReference(v2);
    cout << "\nVecteur avec la plus grande norme: ";
    vNormaxReference.afficher();*/
    return 0;
}
