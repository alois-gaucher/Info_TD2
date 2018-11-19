/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>
#include <math.h>
int n,selection;

void factorielle(int n) {
	int i;
    int resultat = 1;
    /* Nous commencons la boucle qu'a partir de 2 car 0! == 1 et 1! == 1, 1 etant la valeur par initialisation.
    Nous avons donc seulement besoins de multiplier si le nombre rentrer par l'utilisateur est >= 2 */
    for (i=2 ; i<=n ; i++)
        resultat *= i;
    printf("%d \n",resultat);
}

int main() {

	//Menu
	printf("Veuillez choisir l'opération à réaliser: \n");
	printf("1 - Affichage de la factorielle d'un entier [version itérative]\n");
	printf("2 - Affichage de la factorielle d'un entier [version récursive]\n");
	scanf("%d" ,&selection);
	
	switch(selection) {

	case 1:
	printf("Choissez un entier positif pour connaître sa factorielle: \n");
	scanf("%d", &n);
	printf("La factorielle de %d est: \n",n);
	factorielle(n);
	break;

	case 2:
	printf("Non disponible pour le moment! \n");
	break;

	default:
	printf("Veuillez entrer une valeur correcte! \n");
	break;

	}
}