/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

int valint, aint, bint, cint, minimumint, maximumint, selection;
float valfloat, afloat, bfloat, minimumfloat, maximumfloat;

//Fonction valeur absolue
int absolueint (int valint) {
	if (valint < 0) {
		return -valint;
	}
	else {
		return valint;
	}
}

//Fonction valeur absolue flottant
float absoluefloat (float valfloat) {
	if (valfloat < 0.) {
		return -valfloat;
	}
	else {
		return valfloat;
	}
}

//Fonction minimum entier
int miniint (int aint,int bint) {
	if (aint < bint) {
		minimumint = aint;
	}
	else if (aint > bint) {
		minimumint = bint;
	}
	return minimumint;
}

//Fonction minimum float
float minifloat (float afloat,float bfloat) {
	if (afloat < bfloat) {
		minimumfloat = afloat;
	}
	else if (afloat > bfloat) {
		minimumfloat = bfloat;
	}
	return minimumfloat;
}

//Fonction maximum int
int maxint (int aint, int bint) {
	if (aint > bint) {
		maximumint = aint;
	}
	else {
		maximumint = bint;
	}
	return maximumint;
}

//Fonction maximum float
int maxfloat (float afloat, float bfloat) {
	if (afloat > bfloat) {
		maximumfloat = afloat;
	}
	else {
		maximumfloat = bfloat;
	}
	return maximumfloat;
}

//Fonction discriminant
//int discriminant (int aint, int bint, int cint) {
	//discriminant = ((bint*bint)-(4*aint)*cint);
	//return discriminant;
//}


//Fonction main
int main() {
    printf("Veuillez choisir l'opération à réaliser: \n");
	printf("1 - Calcul de la valeur absolue d'un entier\n");
	printf("2 - Calcul de la valeur absolue d'un float\n");
	printf("3 - Calcul du minimum entre deux entiers\n");
	printf("4 - Calcul du minimum entre deux float\n");
	printf("5 - Calcul du maximum entre deux entiers\n");
	printf("6 - Calcul du maximum entre deux float\n");
	scanf("%d" ,&selection);
	switch(selection)
	{
		case 1: //Calcul de la valeur absolue d'un entier
			printf("Veuillez entrer un entier: \n");
			scanf("%d", &valint);
			valint = absolueint(valint);
			printf("La valeur absolue de cet entier est: %d \n", valint);
			break;
		case 2: //Calcul de la valeur absolue d'un float
			printf("Veuillez entrer un float: \n");
			scanf("%f", &valfloat);
			valfloat = absoluefloat(valfloat);
			printf("La valeur absolue de ce float est: %f \n", valfloat);
			break;
		case 3: //Calcul du minimum entre deux entiers
			printf("Veuillez entrer un premier entier: \n");
			scanf("%d", &aint);
			printf("Veuillez entrer un second entier: \n");
			scanf("%d", &bint);
			minimumint = miniint(aint, bint);
			printf("Le plus petit de ces entiers est: %d \n", minimumint);
			break;
		case 4: //Calcul du minimum entre deux float
			printf("Veuillez entrer un premier float: \n");
			scanf("%f", &afloat);
			printf("Veuillez entrer un second float: \n");
			scanf("%f", &bfloat);
			minimumfloat = minifloat(afloat, bfloat);
			printf("Le plus petit de ces float est: %f \n", minimumfloat);
			break;
		case 5: //Calcul du maximum entre deux entiers
			printf("Veuillez entrer un premier entier: \n");
			scanf("%d", &aint);
			printf("Veuillez entrer un second entier: \n");
			scanf("%d", &bint);
			maximumint = maxint(aint, bint);
			printf("Le plus grand de ces entiers est: %d \n", maximumint);
			break;
		case 6: //Calcul du maximum entre deux float
			printf("Veuillez entrer un premier float: \n");
			scanf("%f", &afloat);
			printf("Veuillez entrer un second float: \n");
			scanf("%f", &bfloat);
			maximumfloat = maxfloat(afloat, bfloat);
			printf("Le plus grand de ces float est: %f \n", maximumfloat);
			break;
		default:
			printf("Veuillez choisir une réponse correcte! \n");
			break;
	}
}