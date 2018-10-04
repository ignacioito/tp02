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
#include<time.h>

typedef struct Date Date;
struct Date{
  int jour;
  int mois;
  int annee;
};


int bisextile(int annee)
{ 
	struct annee dubisextile;
	dubisextile.annee[10] = {{1988},{1992},{1996},{2000},{2004},{2008},{2012},{2016},{2020},{2024},{2028},{2032}}
 }
int nbJoursDansMois(int mois, int annee)
{ 
	struct jour dumois;
	dumois.jour = 31;
	printf("%i\n", dumois.jour);
	return 0;
}
int estValide(Date date)
{ 
	struct date dateactuel;
	dateactuel.jour = 03;
	dateactuel.mois = 10;
	dateactuel.annee = 2018;
}
Date demain(Date aujourdhui)
{ 
	struct date dedemain;
	dedemain.date = dateactuel + 1;
}
int main() {
  Date date;
  printf("Entrez une date (jj/mm/aaaa)\n");
  scanf("%d/%d/%d", &date.jour, &date.mois, &date.annee);
  Date lendemain = demain(date);
  printf("Lendemain : %d/%d/%d\n", lendemain.jour,
 }