#include "Etudiant.h"

int Etudiant::matricule = 0;

Etudiant::Etudiant() {
    nom = "Inconnu";
    nbrNotes = 0;
    tabNotes = nullptr;
    matricule = ++matricule;
}
Etudiant::Etudiant(string nom, int nbrNotes) {
    this->nom=nom;
    this->nbrNotes=nbrNotes;
    matricule = ++matricule;
    tabNotes = new double[nbrNotes]();
}

Etudiant::Etudiant(const Etudiant& etud)
    : nom(etud.nom), nbrNotes(etud.nbrNotes) {
    matricule = ++matricule;


    if (nbrNotes > 0) {
        tabNotes = new double[nbrNotes];
        for (int i = 0; i < nbrNotes; i++) {
            tabNotes[i] = etud.tabNotes[i];
        }
    } else {
        tabNotes = nullptr;
    }
}

Etudiant::~Etudiant() {
    delete[] tabNotes;
}

void Etudiant::saisie() {
    cout << "Saisir votre nom : ";
    cin >> nom;
    cout << "Saisir le nombre de notes : ";
    cin >> nbrNotes;
    tabNotes = new double[nbrNotes];
    for (int i = 0; i < nbrNotes; i++) {
        cout << "Saisir la note " << i + 1 << " : ";
        cin >> tabNotes[i];
    }
}

void Etudiant::affichage() {
    cout << "Matricule : " << matricule << "\n";
    cout << "Nom : " << nom << "\n";
    cout << "Nombre de notes : " << nbrNotes << "\n";
    cout << "Notes : ";
    for (int i = 0; i < nbrNotes; i++) {
        cout << tabNotes[i] << " ";
    }
    cout << "\n Moyenne : " << moyenne() << "\n";
    cout << (admin() ? "Admis \n" : "Non Admis\n");
}

float Etudiant::moyenne()  {
    if (nbrNotes == 0)
        return 0.0;
    float somme = 0.0;
    for (int i = 0; i < nbrNotes; i++) {
        somme += tabNotes[i];
    }
    return somme / nbrNotes;
}

bool Etudiant::admin()  {
    return moyenne() >= 10.0;
}


bool Etudiant::comparer( Etudiant& e1, Etudiant& e2) {
    return e1.moyenne() > e2.moyenne();
}

int Etudiant::getMatricule()  { return matricule; }
string Etudiant::getNom()  { return nom; }
int Etudiant::getNbrNotes()  { return nbrNotes; }
double Etudiant::getNote(int index)  {
    if (index >= 0 && index < nbrNotes) {
        return tabNotes[index];
    }
}

void Etudiant::setNom( string& nom) { this->nom = nom; }
void Etudiant::setNbrNotes(int nbrNotes) {
    delete[] tabNotes;
    this->nbrNotes = nbrNotes;
    tabNotes = new double[nbrNotes]();
}

void Etudiant::setNote(int index, double note) {
    if (index >= 0 && index < nbrNotes) {
        tabNotes[index] = note;
    }
}

void Etudiant::setNotes( double* notes) {
    for (int i = 0; i < nbrNotes; i++) {
        tabNotes[i] = notes[i];
    }
}
