#include "TableauDynamique.h"
#include <iostream>
#include <math.h>
using namespace std;

TableauDynamique::TableauDynamique() {
    capacite = 0;
    taille_utilisee = 0;
    ad = nullptr;
}

TableauDynamique::~TableauDynamique() {
    delete[] ad;
}


void TableauDynamique::AfficherDonnes()
{
    cout << "Le tableau est de capacité " << capacite << " et contient " << taille_utilisee << " élément(s)" << endl;
    for (int i=0; i<taille_utilisee;i++)
        {
            cout << ad;
    }
}
void TableauDynamique::ajuster()
{   cout << taille_utilisee;
    int n = log10(taille_utilisee);
    n +=1;
    capacite = pow(10,n);
    cout << capacite;


}
void TableauDynamique::ajouterElement(ElementTD n)
{
    ad[taille_utilisee+ 1] = n;
    taille_utilisee +=1;

}
int main (void)

{   TableauDynamique tableau;
    for (int i=0;i<5;i++)
    {
        tableau.ad[i] = rand() % 10 + 1;
        cout << tableau.ad[i];
    }

    tableau.ajuster();
    for (int i=0; i<7;i++){
            int n = rand() %  10 + 1;
    tableau.ajouterElement(n);}
    tableau.ajuster();
    for (int i=0; i< 12; i++)
    {

     cout << tableau.ad[i];
    }
    return 0;
}
