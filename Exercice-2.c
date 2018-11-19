/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int n,nb,selection;

//Tous les entiers entre zéro et n
void tousentiers(int n) {
int i;
for (i = 0 ; i <= n ; i++) 
	{
	printf("%d \n",i);
	}
}

//Affiche tous les nombres pairs entre zéro et n
void touspairs(int n) {
int i;
for (i=1; i<=n; i++) {
		if (i%2 == 0) {
			printf("%d \n",i);
		}		
	} 
}

//Affiche tous les nombres impairs entre zéro et n
void tousimpairs(int n) {
int i;
for (i=1; i<=n; i++) {
		if (i%2 != 0) {
			printf("%d \n",i);
		}		
	} 
}

//Affiche n fois un nombre nb
void affichagenb(int n, int nb) {
int i;
for (i=0; i<=n; i++)
	printf("%d \n",nb);
}

int main() {

	//Menu
	printf("Veuillez choisir l'opération à réaliser: \n");
	printf("1 - Affichage de tous les entiers entre 0 et n\n");
	printf("2 - Affichage de tous les entiers pairs entre 0 et n\n");
	printf("3 - Affichage de tous les entiers impairs entre 0 et n\n");
	printf("4 - Affichage de n fois un nombre nb\n");
	scanf("%d" ,&selection);

		switch(selection)
		{
			case 1: //Affiche tous les entiers de 0 à n
			printf("Veuillez entrer un entier n: \n");
			scanf("%d", &n);
			printf("Tous les entiers compris entre 0 et %d: \n",n);
			tousentiers(n);
			break;

			case 2: //Affiche tous les entiers pairs de 0 à n
			printf("Veuillez entrer un entier n: \n");
			scanf("%d", &n);
			printf("Tous les entiers pairs compris entre 0 et %d: \n",n);
			touspairs(n);
			break;

			case 3: //Affiche tous les entiers impairs de 0 à n
			printf("Veuillez entrer un entier n: \n");
			scanf("%d", &n);
			printf("Tous les entiers impairs compris entre 0 et %d: \n",n);
			tousimpairs(n);
			break;

			case 4: //Affiche n fois un nombre nb
			printf("Veuillez entrer un entier nb à afficher: \n");
			scanf("%d", &nb);
			printf("Combien de fois voulez-vous l'afficher?: \n");
			scanf("%d", &n);
			printf("Affichage de %d fois le nombre %d: \n",n,nb);
			affichagenb(n,nb);
			break;
	
			default:
			printf("Veuillez entrer une valeur correcte! \n");
			break;
		}
}

