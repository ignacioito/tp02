//
//
//Auteur Ignacio Ito
//
//

/*
3 Demain
Rédigez les fonctions bisextile, nbJoursDansMois, est Valide et 
demain sur les dates. La fonction demain doit faire appel aux trois 
autres (di- rectement ou indirectement). Fournissez le diagramme de 
séquence pour la fonction demain.
*/

#include <stdio.h>
typedef struct Date Date;
struct Date{
  int jour;
  int mois;
  int annee;
};


int bisextile(int annee)
{ /* Votre code ici */ }
int nbJoursDansMois(int mois, int annee)
{ /* Votre code ici */ }
int estValide(Date date)
{ /* Votre code ici */ }
Date demain(Date aujourdhui)
{ /* Votre code ici */ }
int main() {
  Date date;
  printf("Entrez une date (jj/mm/aaaa)\n");
  scanf("%d/%d/%d", &date.jour, &date.mois, &date.annee);
  Date lendemain = demain(date);
  printf("Lendemain : %d/%d/%d\n", lendemain.jour,
 }