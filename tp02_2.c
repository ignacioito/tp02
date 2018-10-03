/*
2 Le carr´e presque magique
Un carr´e presque magique est une matrice carr´ee n × n dont la somme des
rang´ees, colonnes et diagonales est ´egale. Programmez une fonction qui retourne
vrai si la matrice re¸cue est un carr´e presque magique et faux sinon.
Voici quelques exemples de carr´es presque magiques :


16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1




8 8 8
8 8 8
8 8 8




4 9 2
3 5 7
8 1 6


// R est le nombre de rangees, C est le nombre de colonnes.
int estPresqueMagique(const int R, const int C, int
matrice[R][C])
{  Votre code ici }
int main()
{
int matrice[3][3] = {{2,7,6},{9,5,1},{4,3,8}};
if (estPresqueMagique(3, 3, matrice))
{
printf("La matrice est presque magique.\n");
}
else
{
printf("La matrice n’est pas presque magique.\n");
}
}
*/
#include<stdio.h>
#include<stdlib.h>

int estPresqueMagique(const int R, const int C, int
matrice[R][C])
	{
		int i, m;
		for(i = 0; i < 3; i++){
			for(m = 0; m < 3; m++){
				printf("%d\n", matrice[i][m]);
			}
		}
}
int main()
{
int matrice[3][3] = {{2,7,6},{9,5,1},{4,3,8}};
if (estPresqueMagique(3, 3, matrice))
{
printf("La matrice est presque magique.\n");
estPresqueMagique(3,3, matrice);
}
else
{
printf("La matrice n’est pas presque magique.\n");
}
}


