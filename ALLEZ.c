#include "Liste.h"
#include <iostream>
using namespace std;

Liste::Liste(ElementL tab[], unsigned int taille) {

    prem = nullptr;
    last = nullptr;


    for (int i = taille - 1; i >= 0; --i) {
        if (tab[i] < 0) {
            ajouterEnTete(tab[i]);
        }
    }


    for (int i = taille - 1; i >= 0; --i) {
        if (tab[i] >= 0) {
            ajouterEnTete(tab[i]);
        }
    }
}

int main (void)
{
    return 0;
}
