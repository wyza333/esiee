#include <stdio.h>
#define TAILLE 3
void tableCopie (int * table1, int tailleTable1, int * table2, int tailleTable2) {
	int i;

	if (tailleTable1 > tailleTable2) {
		for (i=0; i<tailleTable2; i++) table2[i] = table1[i];
	}
	
	if (tailleTable1 < tailleTable2) {
		for (i=0; i<tailleTable1; i++) table2[i] = table1[i];	
		for (i=tailleTable1; i<tailleTable2; i++) table2[i] = 0;
	}
}

int main (void) {
	int table1[TAILLE] = {1, 2, 3};
	int table2[TAILLE*2];
	int i;

	tableCopie(table1, TAILLE, table2, TAILLE*2);
	
	for (i=0; i<TAILLE; i++) printf("table1[%d] = %d\n",i, table1[i]);
	for (i=0; i<TAILLE*2; i++) printf("table2[%d] = %d\n",i, table2[i]);
	return 0;
}
