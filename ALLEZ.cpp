#include "Liste.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Liste::ajouterEnTete(ElementL e) {
    Cellule* nouvelleCellule = new Cellule;

    nouvelleCellule->info = e;
    nouvelleCellule->suivant = prem;

    prem = nouvelleCellule;
}




Liste::Liste(ElementL tab[], unsigned int taille) {

    prem = nullptr;
    last = nullptr;


    for (int i = taille - 1; i >= 0; --i) {
        if (tab[i] >= 0) {
            ajouterEnTete(tab[i]);
        }
    }

    for (int i = taille - 1; i >= 0; --i) {
        if (tab[i] < 0) {
            ajouterEnTete(tab[i]);
        }
    }



}


Liste::~Liste() {
    // Libération de la mémoire allouée pour les cellules
    Cellule* current = prem;
    while (current != nullptr) {
        Cellule* temp = current;
        current = current->suivant;
        delete temp; // Libération de la mémoire de la cellule
    }
}




void Liste::afficherGaucheDroite() const {
    Cellule* c = prem; // Pointeur sur la première cellule
    while (c != nullptr) {
        cout << c->info << " "; // Affiche l'élément courant suivi d'un espace
        c = c->suivant;       // Passe à la cellule suivante
    }
    cout << endl; // Nouvelle ligne à la fin de l'affichage
}

int main() {
    srand(time(0));
    int t[10];



    for (int i = 0; i <10; i++) {
        t[i] = rand() % 21 - 10;
    }


    cout << "Tableau t : ";
    for (int i = 0; i <10; i++) {
        cout << t[i] << " ";
    }
    cout << endl;


    Liste l(t, 10);


    cout << "Liste l (de gauche à droite) : ";
    l.afficherGaucheDroite();



    return 0;
}
