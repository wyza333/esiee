#include <stdio.h>

int lenString(char * chaine) {
	int i=0;
	int compteur = 0;
	while (*(chaine+i) != '\0') {
		compteur++;
		i++;
	}
	return compteur;
}

int main(void) {
	char * chaine1 = "bonjour";
	printf("Longueur de la chaine : %d",lenString(chaine1));
	
	return 0;
}
