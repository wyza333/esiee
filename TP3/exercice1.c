#include <stdio.h>
#define TAILLE 5

int maxTable(int table [], int taille) {
	int i;
	int valeurMax = table[0];

	for (i=0; i<taille; i++) {
		if (table[i] > valeurMax) {
			valeurMax = table[i];
		}
	}
	return valeurMax;
}


int main(void){
	int tab1[TAILLE] = {1, 2, 4, 9, 3};
	printf("Valeur maximale du tavleau : %d\n", maxTable(tab1, TAILLE));
	return 0;
}
