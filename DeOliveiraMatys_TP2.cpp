#include "TableauDynamique.h"
#include <iostream>
using namespace std;


TableauDynamique::TableauDynamique() {
    capacite = 0;
    taille_utilisee = 0;
    ad = nullptr;
}

TableauDynamique::~TableauDynamique() {
    delete[] ad;
}
void TableauDynamique::insererTabDyn(const  TableauDynamique& tab,unsigned int indice)
{
    if (indice > taille_utilisee){
        cout << "L'indice choisi est supérieur à la taille du tableau";}
    else{

        unsigned int nouvelle_taille = taille_utilisee + tab.taille_utilisee;
        if (nouvelle_taille > capacite)
        {
            capacite = nouvelle_taille;
            ElementTD* temp = new ElementTD[capacite]; // Nouvelle allocation
            for (int i = 0; i < taille_utilisee; i++) {
                temp[i] = ad[i]; // Copier les anciens éléments
            }
            delete[] ad; // Libérer l'ancienne mémoire
            ad = temp; // Réassigner le pointeur
        }
        }
        int i;
        for(i=0; i<tab.taille_utilisee;i++)
        {
            ad[i+indice] = tab.ad[i];
        }



    }



int main (void)
{
TableauDynamique tableau1;
TableauDynamique tableau2;
tableau1.taille_utilisee = 10;
tableau2.taille_utilisee = 10;

tableau1.ad = new ElementTD[tableau1.taille_utilisee];
tableau2.ad = new ElementTD[tableau2.taille_utilisee];

int i;
for(i=0; i<tableau1.taille_utilisee; i++)
{ int e = rand() % 101 - 50;
    tableau1.ad[i] = e;
}
for(i=0; i<tableau2.taille_utilisee; i++)
{   int e = rand() % 101 - 50;
    tableau2.ad[i] = e;
}
for (i=0;i<10;i++)
{
    cout <<  "Tableau 1 [" << i << "]" << tableau1.ad[i];
    cout << endl;
}
for (i=0;i<10;i++)
{
    cout <<  "Tableau 2 [" << i << "]" << tableau2.ad[i];
    cout << endl;
}

int indice = rand() % 10;
cout << "Indice :" << indice;
cout << endl;
tableau1.insererTabDyn(tableau2,indice);
for (i=0; i <tableau1.taille_utilisee+tableau2.taille_utilisee;i++)
{
    cout << "["<< i << "]" << tableau1.ad[i] ;
}


delete[] tableau1.ad;
delete[] tableau2.ad;
    return 0;
}
