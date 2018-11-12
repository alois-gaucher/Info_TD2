/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

int valint, aint, bint, minimumint;
float valfloat, afloat, bfloat, minimumfloat;

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
	if (valfloat < 0) {
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

//Fonction discriminant


//Fonction main
int main() {
	printf("Veuillez entrer un float: \n");
	scanf("%f", &afloat);
	printf("Veuillez entrer un autre float: \n");
	scanf("%f", &bfloat);
	minimumfloat = minifloat(afloat, bfloat);
	printf("La valeur minimale de ces float est: %f \n", minimumfloat);
}