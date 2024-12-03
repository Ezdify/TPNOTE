#ifndef _LISTE
#define _LISTE

#include "ElementL.h"

struct Cellule {
    ElementL info;
    Cellule * suivant;
    Cellule * precedent;
};

class Liste {
public:
    /* Données membres */
    /* =============== */
    Cellule * prem;
    Cellule * last;

    /* Fonctions membres */
    /* ================= */
    Liste ();
    /* Postcondition : la liste est initialement vide */

    ~Liste ();
    /* Postcondition : la mémoire allouée sur le tas est libérée */

    Liste& operator = (const Liste & l);
    /* Postcondition : la liste correspond �  une copie de l (mais les 2 listes sont totalement indépendantes l'une de l'autre) */

    void vider ();
    /* Postcondition : la liste ne contient plus aucune cellule */

    bool estVide () const;
    /* Résultat : vrai si liste vide, faux sinon */

    unsigned int nbElements () const;
    /* Résultat : nombre d'éléments contenus dans la liste */

    ElementL iemeElement (unsigned int indice) const;
    /* Precondition : la liste n'est pas vide, et 0 <= indice < nombre d'éléments
       Résultat : valeur de l'élément �  l'indice en paramètre, sachant que les éléments sont numérotes �  partir de 0 */

    void modifierIemeElement (unsigned int indice, ElementL e);
    /* Precondition : la liste n'est pas vide, et 0 <= indice < nombre d'éléments
       Postcondition : e remplace l'élément �  l'indice en paramètre, sachant que les éléments sont numérotes �  partir de 0 */

    void afficherGaucheDroite () const;
    /* Postcondition : affichage de tous les éléments, en commençant par le premier (espacement entre les éléments) */

    void afficherDroiteGauche () const;
    /* Postcondition : affichage de tous les éléments, en commençant par le dernier (espacement entre les éléments) */

    void ajouterEnTete (ElementL e);
    /* Postcondition : e est ajouté en tête de liste */

    void ajouterEnQueue (ElementL e);
    /* Postcondition : e est ajouté en fin de liste */

    void supprimerTete ();
    /* Precondition : la liste n'est pas vide
       Postcondition : la liste perd son premier élément */

    int rechercherElement (ElementL e) const;
    /* Résultat : position de la première occurrence de e dans la liste (en partant de la gauche),
                  -1 si e n'est pas dans la liste. Les cellules sont numérotées �  partir de 0, donc une valeur de retour égale �  0
                  signifie que la première occurrence de e se trouve dans la première cellule de la liste. */

    void insererElement (ElementL e, unsigned int indice);
    /* Preconditions : 0 <= indice <= nombre d'éléments
       Postconditions : une copie indépendante de e est insérée de sorte qu'elle occupe la position d'indice en paramètre */

    void trier ();
    /* Postcondition : la liste est triée dans l'ordre croissant des valeurs des éléments */

};

#endif
