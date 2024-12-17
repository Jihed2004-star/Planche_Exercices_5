#include "Etudiant.h"

int main() {
    Etudiant e1;
    e1.saisie();
    e1.affichage();

    Etudiant e2;
    e2.saisie();
    e2.affichage();
    if(Etudiant::comparer(e1, e2)==true)
        cout <<  "E1 a une meilleure moyenne"  << "\n";
    else
        cout << "E2 a une meilleure moyenne" << "\n";

    return 0;
}
