/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int valint, aint, bint, cint, minimumint, maximumint, selection;
float valfloat, afloat, bfloat, cfloat, minimumfloat, maximumfloat, capacite, frequence, l;

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
	return ((bfloat*bfloat)-(4*afloat)*cfloat);
}

//Fonction impedance C
float impedanceC (float capacite, float frequence) {
	return (1/(capacite*(2*M_PI*frequence)));
}

//Fonction inductance L
float inductanceL (float l, float frequence) {
	return l*2*M_PI*frequence;
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
	printf("9 - Calcul de l'inductance d'une bobine L\n");
	scanf("%d" ,&selection);
	
	switch(selection)
	{
		case 1: //Calcul de la valeur absolue d'un entier
			printf("Veuillez entrer un entier: \n");
			scanf("%d", &valint);
			printf("La valeur absolue de cet entier est: %d \n", absolueint(valint));
			break;
		case 2: //Calcul de la valeur absolue d'un float
			printf("Veuillez entrer un float: \n");
			scanf("%f", &valfloat);
			printf("La valeur absolue de ce float est: %f \n", absoluefloat(valfloat));
			break;
		case 3: //Calcul du minimum entre deux entiers
			printf("Veuillez entrer un premier entier: \n");
			scanf("%d", &aint);
			printf("Veuillez entrer un second entier: \n");
			scanf("%d", &bint);
			printf("Le plus petit de ces entiers est: %d \n", miniint(aint, bint));
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
			printf("Le plus grand de ces entiers est: %d \n", maxint(aint, bint));
			break;
		case 6: //Calcul du maximum entre deux float
			printf("Veuillez entrer un premier float: \n");
			scanf("%f", &afloat);
			printf("Veuillez entrer un second float: \n");
			scanf("%f", &bfloat);
			printf("Le plus grand de ces float est: %f \n", maxfloat(afloat, bfloat));
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
		case 9: //Calcul de l'inductance d'une bobine
			printf("Veuillez entrer L: \n");
			scanf("%f", &l);
			printf("Veuillez entrer la fréquence: \n");
			scanf("%f", &frequence);
			printf("L'inductance de la bobine est: %f \n", inductanceL(l, frequence));
			break;
		default:
			printf("Veuillez choisir une réponse correcte! \n");
			break;
	}
}