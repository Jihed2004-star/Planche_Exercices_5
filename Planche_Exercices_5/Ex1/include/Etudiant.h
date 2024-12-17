#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include <iostream>

using namespace std;

class Etudiant {


    private:
    int static matricule;
    string nom;
    int nbrNotes;
    double* tabNotes;


public:
    Etudiant();
    Etudiant(string nom, int nbrNotes);
    Etudiant(const Etudiant& etud);

    virtual ~Etudiant();


    int getMatricule();
    string getNom();
    int getNbrNotes();
    double getNote(int index);

    void setNom(string& nom);
    void setNbrNotes(int nbrNotes);
    void setNote(int index, double note);
    void setNotes(double* notes);


    void saisie();
    void affichage();
    float moyenne() ;
    bool admin();

    static bool comparer( Etudiant& e1,  Etudiant& e2);





};

#endif
