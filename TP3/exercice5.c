#include <stdio.h>

void plusLongPrefixe(char * chaine1, char * chaine2) {
	int i=0;
	char chaine3[sizeof(chaine1)];
	while (*(chaine1+i) == *(chaine2+i)) {
		chaine3[i] = chaine1[i];
		i++;
	}
	printf("Le prefixe le plus long est : %s\n",chaine3);
	
}

int main(void) {
	char chaine1[] = "avion";
	char chaine2[] = "aviation";
	plusLongPrefixe(chaine1, chaine2);

	return 0;
}
