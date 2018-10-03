//
//Auteur Ignacio Ito
//
/*
4.2 Carr ́e vraiment magique
Un carr ́e vraiment magique est une matrice carr ́ee n × n dont la somme des
rang ́ees, colonnes et diagonales est  ́egale. En plus, chaque nombre de 1 
`a n2 doit apparaˆıtre une et une seule fois dans la matrice. 
Programmez une fonction qui retourne vrai si la matrice reçue est un carré 
magique et faux sinon.
*/
//


#include<stdio.h>
#include<stdlib.h>

int estPresqueMagique(const int R, const int C, int
matrice[R][C])
	{
		int cont, cont2;
		for(cont = 0; cont < R; cont++){
			printf("\n");
			for(cont2 = 0; cont2 < C; cont2++){
				printf("%d", matrice[cont][cont2]);
			}
		}
		printf("\n");
}
int main()
{
	int ran, col;
	printf("- - - - Carré vraiment magique - - - \n");
	printf("Tapez les nombres de rangée: \n");
	scanf(" %d", &ran);
	printf("%d\n", ran);
	printf("Tapez les nombres de colonnes: \n");
	scanf(" %d", &col);
	printf("%d\n", col);

int matrice[ran][col];
	
	for (int i = 0; i < ran; ++i)
	{
		printf("Tapez le nombre %d du rangée\n", i);
		for (int m = 0; m < col; ++m)
		{
			printf("Tapez le nombre %d de la colonne\n", m);
		}
	}


if (estPresqueMagique(ran, col, matrice))
{
printf("La matrice est presque magique.\n");
estPresqueMagique(ran,col, matrice);
}
else
{
printf("La matrice n’est pas presque magique.\n");
}
}