//
/*


1 Parenth´esage
Programmez une fonction qui re¸coit une chaˆıne de caract`eres et qui retourne
vrai si elle est correctement parenth´es´ee et faux sinon.
Une expression est bien parenth´es´ee si elle contient autant de parenth`eses
fermantes qu’ouvrantes et que chaque parenth`ese fermante vient apr`es une
parenth`ese ouvrante correspondante.

La signature de la fonction est la suivante :

int estBienParenthesee(char expression[]);

Voici des exemples d’expressions bien parenth´es´ees :

"(((((alpha))))bravo)"
"charlie () delta"
"echo foxtrot"
"((golf) (hotel, juliette)) kilo ( lima, mike)"

Voici des exemples d’expressions mal parenth´es´ees :

")!("
"((((november"
"oscar :)"



*/ 


/* J'ai pensez en retouner le valeur en caracthère '('')' etc et faire une boucle
qui fasse le utilisateur taper le caractère et j'ai crée une fonction qui fait le check in de la concatenation de parenthese
*/



#include<stdio.h>
#include<stdlib.h>

char concatenation();

int main(int argc, char const *argv[])
{
	int c, ouinon, i;
	int n;
	char parentheses[10];
	char l;
	
	printf("- - - - Parenthesage - - - -\n");
	printf("Program élaboré pour faire la concatenation des parentheses.\n");

	for(i = 0; i < 10; i++){
		
		printf("tapez ()[]: \n");
		scanf(" %c", &parentheses[l]);
		printf(" %c", parentheses[l]);
		// l = parentheses[i];
		concatenation(l);
		/*	if(ouinon == 0){
			printf("Continue 0 arrete 1: \n");
			n++;
			} */ //J'ai arreté cette condition parce que j'ai déclaré a taille 10 pour le array pour savoir si ça marche :/
	}
	
}

char concatenation(){
	char a; // prendre la variable 'char l' avec les informations du tableaux
		printf(" %c", a);
		if ((a == '(') && (a == ')'))
		{
			printf(" %c\n", a);
		}

}