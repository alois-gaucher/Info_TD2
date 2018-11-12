/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>

int valint, aint, bint, minimumint, maximumint;
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

//Fonction maximum float
int maxfloat (float afloat, float bfloat) {
	if (afloat > bfloat) {
		maximumfloat = afloat;
	}
	else if (bfloat > afloat) {
		maximumfloat = bfloat;
	}
	return maximumfloat;
}

//Fonction maximum int
int maxint (int aint, int bint) {
	if (aint > bint) {
		maximumint = aint;
	}
	else if (bint > aint) {
		maximumint = bint;
	}
	return maximumint;
}


//Fonction main
int main() {
	printf("Veuillez entrer un int: \n");
	scanf("%d", &aint);
	printf("Veuillez entrer un autre int: \n");
	scanf("%d", &bint);
	maximumint = maxint(aint, bint);
	printf("La valeur maximale de ces int est: %d \n", maximumint);
}