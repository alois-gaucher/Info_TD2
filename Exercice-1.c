/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

int valint, aint, bint, cint, minimumint, maximumint, selection;
float valfloat, afloat, bfloat, cfloat, minimumfloat, maximumfloat, x, capacite, frequence;

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
float maxfloat (float afloat, float bfloat) {
	if (afloat > bfloat) {
		maximumfloat = afloat;
	}
	else {
		maximumfloat = bfloat;
	}
	return maximumfloat;
}

//Fonction discriminant
float discriminant (float afloat, float bfloat, float cfloat) {
	x = ((bfloat*bfloat)-(4*afloat)*cfloat);
	return x;
}

//Fonction impedance C
float impedanceC (float capacite, float frequence) {
	x = 1/(capacite*(2*3.14159265359*frequence));
	return x;
}


//Fonction main
int main() {
    printf("Veuillez choisir l'opération à réaliser: \n");
	printf("1 - Calcul de la valeur absolue d'un entier\n");
	printf("2 - Calcul de la valeur absolue d'un float\n");
	printf("3 - Calcul du minimum entre deux entiers\n");
	printf("4 - Calcul du minimum entre deux float\n");
	printf("5 - Calcul du maximum entre deux entiers\n");
	printf("6 - Calcul du maximum entre deux float\n");
	printf("7 - Calcul du discriminant\n");
	printf("8 - Calcul de l'impédance d'un condensateur C\n");
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
		case 7: //Calcul du discriminant
			printf("Veuillez entrer a: \n");
			scanf("%f", &afloat);
			printf("Veuillez entrer b: \n");
			scanf("%f", &bfloat);
			printf("Veuillez entrer c: \n");
			scanf("%f", &cfloat);
			//discriminant = discriminant(afloat, bfloat, cfloat);
			printf("Le discriminant est: %f \n", discriminant(afloat, bfloat, cfloat));
			break;
		case 8: //Calcul de l'impédance d'un condensateur C
			printf("Veuillez entrer la capacité du condensateur: \n");
			scanf("%f", &capacite);
			printf("Veuillez entrer la fréquence: \n");
			scanf("%f", &frequence);
			printf("L'impédance du condensateur C est: %f \n", impedanceC(capacite, frequence));
			break;
		default:
			printf("Veuillez choisir une réponse correcte! \n");
			break;
	}
}