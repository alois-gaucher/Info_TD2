/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int n,selection;

//Tous les entiers entre zéro et N
void tousentiers(int n) {
int i;
for (i = 0 ; i <= n ; i++) 
	{
	printf("%d \n",i);
	}
}

int main() {

	//Menu
	printf("Veuillez choisir l'opération à réaliser: \n");
	printf("1 - Affichage de tous les entiers entre 0 et n\n");
	scanf("%d" ,&selection);

		switch(selection)
		{
			case 1:
			printf("Veuillez entrer un entier n: \n");
			scanf("%d", &n);
			printf("Tous les entiers compris entre 0 et %d: \n",n);
			tousentiers(n);
			break;
	
			default:
			printf("Veuillez entrer une valeur correcte! \n");
			break;
		}
}

