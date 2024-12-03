#include "TableauDynamique.h"
#include <iostream>
using namespace std;


TableauDynamique::TableauDynamique()
{
    capacite =0;
    taille_utilisee=0;
    ad = nullptr;
}
TableauDynamique::~TableauDynamique()
{
    delete[] ad;
}



void TableauDynamique::concatener(TableauDynamique t)
{
    capacite = taille_utilisee + t.taille_utilisee;
    ElementTD* new_ad = new ElementTD[capacite];
     for (int i = 0; i < taille_utilisee; i++) {
        new_ad[i] = ad[i];
    }
    for (int i = 0; i < t.taille_utilisee; i++) {
        new_ad[taille_utilisee + i] = t.ad[i];
    }
 delete[] ad;
 ad = new_ad;
 taille_utilisee += t.taille_utilisee;}

int main (void)
{
TableauDynamique tableau1;
TableauDynamique tableau2;
int taille1 = rand() % 10 + 1;
int taille2 = rand() % 10 + 1;
tableau1.ad = new ElementTD[taille1];
tableau2.ad = new ElementTD[taille2];
int i;
for(i=0; i<taille1; i++)
{
    tableau1.ad[i]= rand() % 101 - 50;
    cout << tableau1.ad[i];
}
for(i=0; i<taille2; i++)
{
    tableau2.ad[i]= rand() % 101 - 50;
    cout << tableau2.ad[i];
}

tableau1.concatener(tableau2);


for(i=0; i<taille1+taille2; i++)
{
    cout << tableau1.ad[i];
}
delete[] tableau1.ad;
    delete[] tableau2.ad;
    return 0;

}
